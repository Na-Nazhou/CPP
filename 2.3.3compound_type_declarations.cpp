#include <iostream>
// base type + a list of declarators
// each declarator names a variable and gives the variable a type that is related to the base type

int main() {
    int i = 1024, *p = &i, &r = i;
    // i is an int; p is a pointer to int; r is a reference to int
    int* p1, p2; // p1 is a pointer to int; p2 is an int
    int p1, p2; // both p1 and p2 are pointers to #include
    int* p1; // p1 is a pointer to int
    int* p2; // p2 is a pointer to int

    // **: pointer to a pointer, ***: pointer to a pointer to a pointer
    int ival = 1024;
    int *pi = &ival; // pi points to an int
    int **ppi = &pi; // ppi points to a pointer to an int
    std::cout << "The value of ival\n" << "direct value: " << ival << "\n"
              << "indirect value: " << *pi << "\n"
              << "doubly indirect value: " << **ppi << std::endl;

    // references to pointers
    int i = 42;
    int *p; // p is a poiter to int
    int *&r = p; // r is a reference to the pointer (r is another name for pointer p)
    r = &i; // r refers to a pointer; assigning &i to r makes p point to i
    // r is a reference to a pointer to an int
    return 0;
}
