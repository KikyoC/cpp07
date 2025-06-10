#include "iter.hpp"
#include <iostream>


void printChar(char &c)
{
	std::cout << c << std::endl;
}

void printCharConst(const char &c)
{
	std::cout << c << std::endl;
}

int main()
{
	char str[] = "Help";

	iter(str, 4, printChar);
	std::cout << "Ended" << std::endl;
	iter(str, 4, printCharConst);
	std::cout << "Ended" << std::endl;
}
