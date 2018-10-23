#ifndef SALES_DATA_H
#define SALES_DATA_H
// prerprocess: a program that runs before the compiler and change the source text
// header guards (guard against multiple inclusions)=> rely on preprocessor variables
// defined or not defined
// #define => define that name as a preprocessor variable
// #iddef is true if the variable has been defined
// processed uup to the matching #endif
// preprocessor variables must be unique throughout the program
// header should not include using declarations

#include <iostream>
#include <string>

// headers usually contain: class definitions and const and constexpr variables
// that can be defined only once in any given file
struct Sales_data {
    // name defined inside the class body must be unique within the class
    // class body defines the members of the class
    std::string bookNo; // initialized to empty string
    unsigned units_sold = 0;
    double revenue = 0.0;
    // in-class initialization
}; // must followed by a semicolon (at the end of a class definition)
// we can define variables after the class body
Sales_data accum, trans, *salesptr;

#endif
