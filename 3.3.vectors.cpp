#include <iostream>
#include <Sales_item.h>
#include <string>
#include <vector>

int main() {
    std::vector<int> ivec; // ivec holds objects of type int
    std::vector<Sales_item> Sales_vec; // holds Sales_items
    std::vector<std::vector<std::string>> file; // vector whose elements are vectors
    // earlier version
    std::vector<std::vector<int> > file1;

    std::vector<std::string> svec; //default initialized; svec has no elements
    std::vector<int> ivec2(ivec); // copy elements of ivec into ivec2
    // std::vector<std::string> svec(ivec2); error: svec holds strings, not ints

    std::vector<int> ivec3(10, -1); //ivec3 has 10 value with value -1
    std::vector<int> ivec4{10, 1}; //ivec4 has two elements with values 10 and 1
    std::vector<std::string> ivec5{10, "hi"}; // ivec5 has ten elements with value "hi"
    std::vector<std::string> svec1(10, "hi");

    //default initialized
    std::vector<int> ivec6(10); // 10 elements with value 0
    std::vector<std::string> svec2(10); // 10 elements with value empty string

    return 0;
}
