#pragma once

#include <cstddef>
#include <iostream>
template <typename T>
void iter(T *array, int len, void (*fct)(T &))
{
	if (array == NULL || fct == NULL)
		return;
	for (int i = 0; i < len; i++)
		fct(array[i]);
}

template <typename T>
void specialFct(T &e)
{
	std::cout << e;
}
