#pragma once

#include <cstddef>
template <typename T, typename T_function>
void iter(T *array, int len, T_function &fct)
{
	if (array == NULL || fct == NULL)
		return;
	for (int i = 0; i < len; i++)
		fct(array[i]);
}
