#include <iostream>

int main() {
	std::string someString("let me see what it gets to");
	std::cout << someString << '\n';
	int length = someString.length();
	std::cout << length << '\n';
	std::cout << someString[0] << '\n';
	std::cout << someString[length-1];
}