#include <iostream>

int main () {
	// Integers holding the inputted value and running sum
	int val = 0, sum = 0;
	
	std::cout << "Input a list of numbers to sum" << std::endl;
	
	// Numbers are added while valid input is found
	while (std::cin >> val) 
		sum+= val;
	
	// Total sum is outputted
	std::cout << "The sum of the inputted numbers is: " << sum << std::endl;
}
