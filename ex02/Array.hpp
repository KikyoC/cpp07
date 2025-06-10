#pragma once

#include <cstddef>
#include <exception>
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
		Array(const Array &cpy)
		{
			this->s = cpy.s;
			this->elements = new T[this->s];
			for (int i =0; i < this->s; i++)
				this->elements[i] = cpy.elements[i];
		}
		Array operator=(const Array &cpy)
		{
			this->s = cpy.size();
			this->elements = new T[this->s];
			for (int i =0; i < this->s; i++)
				this->elements[i] = cpy[i];
		}
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
