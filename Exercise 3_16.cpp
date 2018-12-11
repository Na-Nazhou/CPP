#include <iostream>
#include <vector>
#include <string>

/*
int main()
{
	std::vector<int> vec{10};
    std::cout << "Size: " << vec.size() << std::endl;

    for(auto c : vec) {
        std::cout << c << std::endl;
    }

	return 0;
}
*/

// vector<int> v1;
// vector<int> v2(10);
// vector<int> v3(10, 42);
// vector<int> v4{10};
// vector<int> v5{10, 42};
// vector<string> v6{10};
// vector<string> v7{10, "hi"};

// using iterators
int main() {
	std::vector<int> vec;
	std::cout <<"Size: " << vec.size() << std::endl;
	auto b = vec.begin();
	while (b != vec.cend()){
		std::cout << *b << std::endl;
		++b;
	}
	return 0;
}
