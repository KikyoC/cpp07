#pragma once

template <typename T>
void swap(T &first, T &second)
{
	T tmp = first;
	first = second;
	second = tmp;
}

template <typename T>
T &min(T &first, T &second)
{
	return first < second ? first : second;
}

template <typename T>
T &max(T &first, T &second)
{
	return first > second ? first : second;
}

