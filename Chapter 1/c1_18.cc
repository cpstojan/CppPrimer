#include <iostream>

int main () {
	int val = 0, curVal = 0;
	// check if any valid input
	if (std::cin >> val) {
		int counter = 1;
		while (std::cin >> curVal) {
			// increment counter if input is matching
			if (curVal == val) ++counter;
			// else output count and reset counter
			else {
				std::cout << "Value " << val << " occurs "
					<< counter << " times" << std::endl;
				val = curVal;
				counter = 1;
			}
		}
		// output of final digit
		std::cout << "Value " << val << " occurs " << counter 
			<< " times" << std::endl;
	} 
}
