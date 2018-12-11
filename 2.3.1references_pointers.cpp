#include <iostream>

int main() {
    int ival = 42; // ival is an int
    int &refVal = ival; //refVal refers to ival
    //int &refVal2; error: a reference must be initialized
    refVal = 2; //assigns 2 to the object to which refVal refers, i.e., to ival
    int &refVal3 = revVal; // refVal3 is bound to the object to which refVal is bound, o.e., to ival
    int li = refVal; // initializes li to the same value as ival, same as int li = ival;

    int i = 1024, i2 = 2048; // i and i2 are both ints
    int &r = i, r2 = i2; // r is a reference bound to i; r2 is an int
    int i3 = 1024, &ri = i3; // i3 is an int; ri is a reference bound to i3
    int &r3 = i3, &r4 = i2; // both r3 an r4 are references

    //int &refVal4 = 10; error: initializer must be an object
    double dval = 3.14;
    //int &refVal5 = dval; error: initializer must be an int object

// ***********************************************************************
    double dval;
    double *pd = &dval; // initializer is the address of a double
    double *pd2 = pd; // initializer is a pointer to a double
    // int *pi = pd; error: types of pi and pd differ, initializer must be an int object
    // pi = &dval; error: assigning the address of a double to a pointer to int

    int ip1, ip2; // both ip1 and ip2 are pointers to int
    double dp, *dp2; // dp2 is a pointer to double; dp is a double
    int *p = &ival; // p holds the address of ival; p is a pointer to ival
    // defines p as a pointer to int and initializes p to point to the int boject named ival
    std::cout << *p; // * yields the object to which p points; prints 42
    *p = 0; // * yields the object; assign a new vlaue to ival through p
    std::cout << *p; // prints 0

    // to obtain a null pointer:
    int *p1 = nullptr; // use literal nullptr
    int *p2 = 0; // directly initializes p2 from the literal constant 0
    // must #include cstdlib
    int *p3 = NULL; // preprocessor variable NULL

    int zero = 0;
    // pi = zero; error: cannot assign an int variable to a pointer, even if the variables's value happens to be 0

    int *pi = 0; // pi is initialized but addresses no object
    pi = &ival; // value in pi is changed; pi now points to ival
    *pi = 0; // value in ival is changed; pi is unchanged
    int *pi2 = &i; // pi2 is initialized to hold the address of i
    int *pi3; // if pi3 is defined inside a block, pi3 is unitialized
    pi3 = pi2 // pi3 and pi2 address the same object, i.e. i
    pi2 = 0; // pi2 now addresses no object

    double obj = 3.14, *pd = &obj;
    void *pv = &obj; // obj can be an object of any type
    pv = pd; // pv can hold a pointer to any type
    // cannot use a void* to operate on the object it addresses
    return 0;
}
