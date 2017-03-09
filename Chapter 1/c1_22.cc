#include <iostream>
#include "Sales_item.h"

// reads several transactions for the same ISBN
// write the sum of all the transactions that were read

int main () {
	Sales_item curr, comp;
	if (std::cin >> curr) {
		while (std::cin >> comp) {
			if (curr.isbn() == comp.isbn())
				curr += comp;	
			else {
				std::cout << curr << std::endl;
				curr = comp;
			}
		}
		std::cout << curr << std::endl;
	} else {
		std::cerr << "No input given" << std::endl;
		return 1;
	}

	return 0;
}	
