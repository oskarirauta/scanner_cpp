#include <iostream>
#include "scanner.hpp"

int main(int argc, char **argv) {

	std::string s = "test 1 2 hello world 7 ";
	std::string s0, s3, s4;
	int i1, i2, i5 = 0;
	size_t c;
	std::string b;

	c = scan(s, {{ 0, &s0 }, { 3, &s3 }, { 1, &i1 }, {2, &i2 }, { 4, &s4 }, { 5, &i5 }, { 6, &b }});

	std::cout << "\nstring is " << s << std::endl;
	std::cout << "captured " << c << " values" << std::endl;
	std::cout << "parsed s0 is " << s0 << " and s4 is " << s3 << " and s5 is " << s4 << std::endl;
	std::cout << "i1 is " << i1 << " and i2 is " << i2 << " and i5 is " << i5 <<std::endl;

	std::cout << "b is " << b << std::endl;

	return 0;
}
