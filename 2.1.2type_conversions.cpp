#include <iostream>

bool b = 42; // b is true
int i = b; // i has value 1
i = 3.14; // i has value 3
double pi = i; // i has value 3.0
unsiged char c = -1; // assuming 8-bit chars, c has value 255
signed char c2 = 256; // assuming 8-bir chars, the value of c2 is undefined

unsigned u = 10; // unsigned int
int i = -42; // signed
std::cout << i + i << std::endl; // print -84
std::cout << u + i << std::endl; // if 32-bit ints, print 4294967264

unsigned u1 = 42, u2 = 10;
std::cout << u1 - u2 << std::endl; // ok: result is 32
std::cout << u2 - u1 << std::endl; // ok: but the result will wrap around

// signed values are automatically converted to unsigned

if (i) // only false if i == 0

int ival = 1024;
int *pi = 0; // pi is a valid, null pointer
int *pi2 = &ival; // pi2 is a valid pointer that holds the address of ival
if (pi) // pi has value 0, so condition evaluates as false
// ...
if (pi2) // pi2 points to ival, so it is not 0; the condition evaluates as true
// ...
