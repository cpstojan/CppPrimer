#include <iostream>
#include "Sales_item.h"
// reads two Sales_item objects that have the same ISBN and produces their sum

int main () {
	Sales_item item1, item2;
	std::cin >> item1 >> item2;

	if (item1.isbn() != item2.isbn()) {
		std::cerr << "ISBN must match" << std::endl;
		return 1;
	}
	std::cout << item1 + item2 << std::endl;
}
