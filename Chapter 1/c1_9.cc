#include <iostream>

int main () {
	int val =  50, sum = 0;
	while (val <= 100) {
		sum += val;
		++val;
	}
	std::cout << "The sum from 50 to 100 is: " << sum << std::endl;
	// alternatively could have used SUM = (n - m + 1)(n + m) / 2
}
