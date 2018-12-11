#include <iostream>

int main() {
    // store the address of a const object only in a pointer to const
    const double pi = 3.14;
    // double *ptr = &pi; error: ptr is a plain pointer
    const double *cptr = &pi // cptr may point to a double that is const
    //cptr = 42; // eroor: cannot assign to *cptr

    // pointer to const can point to a nonconst object => low-level const
    double dval = 3.14;
    cptr = &dval; // ok but cant change dval through cptr

    // const pointer => top-level const
    int errNumb = 2;
    int *const curErr = &errNumb; //curErr will always point to errNumb
    const double pi = 3.14159;
    const double *const pip = &pi; // pip is a const pointer to a const object

    // *pip = 2.72; error: pip is a pointer to const
    if (*curErr) { // currNumb is nonzero
        errorHandler();
        *curErr = 0; // rest the value of the object to which currErr is bound
    }
    return 0;
}
