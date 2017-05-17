#include <iostream>

int main () {
	// Counting down from val to 0, storing addition in sum
	int val = 10, sum = 0;
	while (val > 0) {
		sum += val;
		--val;
	}
	// Printing output of total sum
	std::cout << "The sum from 10 to 0 is: " << sum << std::endl;
}
