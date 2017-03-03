#include <iostream>

int main () {
	std::cout << "/*"; // legal
	std::cout << "*/"; // legal
	std::cout << /* "*/" */; // not legal
	std::cout << /* "*/" /* "/*" */; // legal
}
