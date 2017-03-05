#include <iostream>

int main () {
	int val = 10, sum = 0;
	while (val > 0) {
		sum += val;
		--val;
	}
	std::cout << "The sum from 10 to 0 is: " << sum << std::endl;
}
