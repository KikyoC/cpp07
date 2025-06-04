#pragma once

#include <cstddef>
#include <exception>
#include <iostream>
template <class T>
class Array{

	public:
		Array(): s(0)
		{
			this->elements = new T[this->s];
		}
		Array(unsigned int n): s(n)
		{
			this->elements = new T[this->s];
		}
		// Array(const Array &cpy);
		// Array operator=(const Array &cpy);
		~Array()
		{
			delete [] this->elements;
		}

		T &operator[](unsigned int index)
		{
			if (index > this->s)
				throw OutOfBoundsException();
			return this->elements[index];
		}
		std::size_t size() const
		{
			return this->s;
		}

		class OutOfBoundsException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Index out of bounds";
				}
		};
	private:
		T *elements;
		unsigned int s;

};

// #include "Array.tpp"
