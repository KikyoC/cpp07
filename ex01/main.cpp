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
	char str[] = {'H', 'e', 'l', 'p'};
	const char strConst[] = {'H', 'e', 'l', 'p'};

	iter(str, 4, printChar);
	std::cout << "Ended" << std::endl;
	iter(strConst, 4, printCharConst);
	std::cout << "Ended" << std::endl;
	iter(str, 4, specialFct);
	std::cout << "Ended" << std::endl;
}
