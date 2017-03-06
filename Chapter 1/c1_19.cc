#include <iostream>

int main () {
	int n, m, sum = 0;
	
	std::cout << "Input two numbers where n < m" << std::endl;
	std::cin >> n >> m;
	
	// flip numbers if user did not follow input instructions
	if (n > m){
		int tmp = m;
		m = n;
		n = tmp;
	}
	
	for (int count = n; count <= m ; ++count)
		sum += count;
	
	std::cout << "The sum from " << n  << " to " 
		<< m << " is " << sum << std::endl;
	
	return 0;
}
