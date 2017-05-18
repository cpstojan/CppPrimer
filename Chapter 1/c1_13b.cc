#include <iostream>

int main () {
	// starting at from, up to to
	// each number up to and including is summed
	int from = 10, to = 0, sum = 0;
	for (int n = from; n >= to; --n)
		sum += n;
	std::cout << "The sum from " << from << " to "
		<< to << " is " << sum << std::endl;
}
