#include <iostream>
#include "Sales_item.h"

int main () {
	Sales_item current, next;
	int count = 1;
	
	// check if there is data to input
	if (std::cin >> current) {
		while (std::cin >> next) {
			// if isbn are the same add to count
			if (current.isbn() == next.isbn()) 
				++count;
			// otherwise print the count and reset the counter
			else {
				std::cout << current.isbn() << " had "
					<< count << " transactions" << std::endl;
				current = next;
				count = 1;
			}
		}
		// making sure to print the final transaction
		std::cout << current.isbn() << " had " << count << " transactions" << std::endl;	
	} else {
		//error meesage if there is no data
		std::cerr << "No input given" << std::endl;
		return 1;
	}
}
