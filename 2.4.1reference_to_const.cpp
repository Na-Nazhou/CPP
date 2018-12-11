#include <iostream>

int main() {
    const int bufSize = 512;
    // bufSize = 512; // error: attempt to write to const object
    // must initialize const object after we create it
    const int i = get_size(); // initialize at runtime
    const int j = 42; // initialize at compile time
    // const int k; error: k is uninitialized const

    int i = 42;
    const int ci = i; // the value in i is copied into ci
    int j = ci; //the value in ci is copied into j
    // once the copy is made, the new object has no further access to the original object

    // const variabls are defined as local to the file
    extern const int bufSize = fcn(); // defines and initializes a const that is accessible to other ifles
    extern const int bufSize; // same bufSize as defined in the previous file

    // const reference = reference to const: a reference that refers to a const type
    // a reference to const cannot be used to change the object to which the reference is bound
    const int ci = 1024;
    const int &r1 = ci;
    // ri = 42; error: r1 is a reference to const
    // int &r2 = ci; error: non const reference to a const object

    // we can bind a reference to const to a nonconst object, a literal, or a more general expression
    int i = 42;
    const int &r1 = i // bind a reference to const to a plain int object
    const int &r2 = 42; // r2 is a reference to const
    const int &r3 = r1 * 2; // r3 is a reference to const
    // int &r4 = r1 *2; error: r4 is a plain, non const reference

    // the type of a reference must match teh type of the object to which it refers
    double dval = 3.14;
    const int &ri = dval;
    // compilor transformation:
    const int temp = dval; // create a temporary const int from the double
    const int &ri = temp; // bind ri to that temporary
    // reference to const restricts only what we can do through that reference
    return 0;
}
