#include <iostream>
#include "Sales_item.h"

int main () {
	Sales_item total;
	// checking to ensure that there is data to process
	if (std::cin >> total) {
		Sales_item trans;
		while (std::cin >> trans) {
			// checks if ISBNs of the books are equal
			if (trans.isbn() == total.isbn())
				// adds read in input to total input
				total += trans;
			else {
				// prints and resets
				std::cout << total << std::endl;
				total = trans;
			}
		}
		// prints the last transaction
		std::cout << total << std::endl;
	} else {
		// fails if no data given
		std::cerr << "No data" << std::endl;
		return 1;
	}
	return 0;
}
