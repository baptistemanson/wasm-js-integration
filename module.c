/*

To compile the program, run in the same folder as 
emcc module.c -s WASM=1 -o module.js -s EXPORTED_FUNCTIONS="['_coolbeans']"

We include a header <stdio.h>. 
Headers only contain types and function signatures. 
stdio.h contains the signature of printf
The file stdio.h is resolved first locally (in current dir), then at all the paths denoted by the INCLUDE env variable.
*/

#include "stdio.h"
/*
inttypes contains the different integer types int8_t and int32_t definitions.
*/
#include "inttypes.h"

int coolbeans(int x, char * y, uint8_t * arr, int32_t * arr32) {
  printf("Ints in emscripten cwrap signature is interpreted like you would expect %i\n",x);
  printf("and strings are char * like this %s\n",y);
  printf("but the type 'array' in emscripten cwrap signature is a weird animal.\n");
  printf("Unsigned Int8 Array entries will be fine: [%i,%i,%i,%i]\n",arr[0], arr[1], arr[2], arr[3]);
  printf("Numbers will overflow if > 255, such as 256+3 which is now equal to: %i \n",arr[4]);
  printf("Floats will be floored, like 42.8 which becomes: %i\n",arr[5]);
  printf("Other entries are silently zero-ed, like 'strings' or {}: %i %i\n",arr[6], arr[7]);

  printf("You can use a 32bit array if you need >255 integers [%i,%i,%i]\n",arr32[0], arr32[1], arr32[2]);

  return 42;
}
