#include <Array.hpp>
#include <exception>
#include <iostream>
int main(void)
{
	Array<int> *array = new Array<int>(5);

	std::cout << "Size is " << array->size() << std::endl;
	
	try {
		(*array)[4] = 17;
		std::cout << "Here I put " << (*array)[4] << std::endl;
		std::cout << "This is the size: " << array->size() << std::endl;
		std::cout << "Hello " << (*array)[4] << std::endl;
		(*array)[10] = 1;
	} catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Here" << std::endl;
	int *a = new int();
	// There is a trick with this
	std::cout << "A is " << a << std::endl;
	std::cout << "Array is " << array << std::endl;
	delete a;
	delete array;
}
