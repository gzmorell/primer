/*
 *
*/ 

#include <iostream>

int main()
{
	// prompt user to enter two numbers
	auto &sto = std::cout << "Enter two numbers:";
	sto << std::endl; 
	int v1 = 0, v2 = 0;
	auto &sti = std::cin >> v1;
	sti >> v2;   
	std::cout << "The sum of " << v1 << " and " << v2
	          << " is " << v1 + v2 << std::endl;
	return 0;
}

