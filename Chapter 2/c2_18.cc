#include <iostream>

int main () {
	// code to change the value of a pointer
	int x = 1;
	int * ip = &x;
	*ip = 12;
	std::cout << x << std::endl;

	// code to change where a pointer points
	int y = 2;
	ip = &y;
	std::cout << *ip << std::endl;
}
