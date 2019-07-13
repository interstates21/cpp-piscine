#include <iostream>

int main(void) {
	std::string s = "HI THIS IS BRAIN";

    std::string *p = &s;

    std::string &r = s;

	std::cout << *p << std::endl;
	std::cout << r << std::endl;
}