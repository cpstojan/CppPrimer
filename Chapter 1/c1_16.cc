#include <iostream>

int main () {
	int val = 0, sum = 0;
	
	std::cout << "Input a list of numbers to sum" << std::endl;
	
	while (std::cin >> val) 
		sum+= val;

	std::cout << "The sum of the inputted numbers is: " << sum << std::endl;
}
