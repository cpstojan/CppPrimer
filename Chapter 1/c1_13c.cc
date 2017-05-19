#include <iostream>

int main () {
	int n, m, sum = 0;
	
	// Request for input, with contract for input
	std::cout << "Input two numbers where n < m" << std::endl;
	// Input is stored in n and m, n being start, m end
	std::cin >> n >> m;
	
	// Input is checked for correctness
	if (n > m){
		std::cout << "Input is incorrect" << std::endl;
		return 0;
	}
	
	// Sum is produced
	for (int count = n; count <= m ; ++count)
		sum += count;
	
	// Sum is outputted
	std::cout << "The sum from " << n  << " to " 
		<< m << " is " << sum << std::endl;
}
