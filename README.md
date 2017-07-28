# WASM <-> JS type conversion exploration


I had difficulties while starting on WASM to understand:
- how JS <> WASM type conversions worked in function signatures,
- how to compile a pure library with no main
- how to use arrays

Those things may be obvious for C background people, but as a webdev, it was wayyy to long to understand this.

The question was repeated quite a lot on stackoverflow, so I leave this project for notes and documentation, hoping it may help another day.


# How to install


```bash
cd js2c-type-conversion
emcc module.c -s WASM=1 -o module.js -s EXPORTED_FUNCTIONS="['_coolbeans']"

```
