#include <Array.hpp>
#include <exception>
#include <iostream>
int main(void)
{
	Array<int> array = Array<int>(5);

	std::cout << "Size is " << array.size() << std::endl;
	
	try {
		array[4] = 17;
		std::cout << "Here i put " << array[4] << std::endl;
		std::cout << "This is the size: " << array.size() << std::endl;
		array[10] = 1;
	} catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
