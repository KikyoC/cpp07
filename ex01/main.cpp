#include "iter.hpp"
#include <iostream>


void printChar(char &c)
{
	std::cout << c << std::endl;
}

int main()
{
	char str[] = "Help";

	iter(str, 4, printChar);
}
