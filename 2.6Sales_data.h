#ifndef SALES_DATA_H
#define SALES_DATA_H
// prerprocess: a program that runs before the compiler and change the source text
// header guards (guard against multiple inclusions) => rely on preprocessor variables
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
    std::string bookNo; // initialized to empty string // a string representing the ISBN
    unsigned units_sold = 0; // how many copies of the book were sold
    double revenue = 0.0; // total revenues for those sales
    // in-class initialization

    // constructors
    Sales_data() = default;
    Sales_data(const std::String &s): bookNo(s) { }
    Sales_data(const std::String &s, unsigned n, double p):
        bookNo(s), units_sold(n), revenue(p*n){ }
    Sales_data(std::istream &);

    // operations on Sales_data objects
    // member functions
    std::string isbn(/* const Sales_data *const this*/) const { // the const is to modify the type of the implicit this pointer
        return bookNo; // this->bookNo; this is a const pointer; we channot change the address that this holds
    }
    Sales_data& combine (const Sales_data&);
    double avg_price() const;


}; // must followed by a semicolon (at the end of a class definition)
// we can define variables after the class body
Sales_data accum, trans, *salesptr;

// non_member Sales_data interface functions
Sales_data add(const Sales_data&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
std::ostream &print(std::ostream&, const Sales_Data&);

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double Sales_data::avg_price() const {
    if (units_sold) {
        return revenue/units_sold;
    } else {
        return 0;
    }
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

istream &read(istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " "
    << item.revenue << " " << item.avg_price();
    return os;
}

#endif
