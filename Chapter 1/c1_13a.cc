#include <iostream>

int main () {
	// min is counted from, max is counted up to
	// sum of numbers including and between min and max is saved in sum
	int min = 50, max = 100, sum = 0;
	for (int count = min; count <= max; ++count)
		sum += count;
	std::cout << "The sum from " << min << " to " 
		<< max << " is " << sum << std::endl;
}
