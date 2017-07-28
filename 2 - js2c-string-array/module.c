#include "stdio.h"

#include "inttypes.h"

int coolbeans(char **arr, int length)
{
  for (int i = 0; i < length; i++)
  {
    printf("[%s]\n", arr[i]);
  }
  return 42;
}
