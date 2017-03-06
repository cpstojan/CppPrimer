#include <iostream>

int main () {
	int n, m, sum = 0;
	
	std::cout << "Input two numbers where n < m" << std::endl;
	std::cin >> n >> m;

	if (n > m){
		std::cout << "Input is incorrect" << std::endl;
		return 0;
	}
	
	for (int count = n; count <= m ; ++count)
		sum += count;
	
	std::cout << "The sum from " << n  << " to " 
		<< m << " is " << sum << std::endl;
}
