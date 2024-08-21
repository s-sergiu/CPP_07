
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class Array {
	private:
		T *arr;
		unsigned int m_size;
	public:
		Array(void);
		Array(unsigned int);
		Array(const Array &);
		~Array(void);
		Array operator = (const Array &);
		T& operator [] (unsigned int) const;
		unsigned int size(void) const;
};

#include "Array.tpp"

#endif
