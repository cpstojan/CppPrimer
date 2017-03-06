#include <iostream>

int main () {
	int min = 50, max = 100, sum = 0;
	for (int count = min; count <= max; ++count)
		sum += count;
	std::cout << "The sum from " << min << " to " 
		<< max << " is " << sum << std::endl;
}
