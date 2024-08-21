
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

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
		T& operator [] (unsigned int);
		int size(void);
};


template<typename T>
Array<T>::Array(void) {
	this->arr = new T;
	this->m_size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	this->arr = new T[n];
	this->m_size = n;
}

template<typename T>
Array<T>::Array(const Array &src) {
	this->arr = src.arr;
	this->m_size = src.m_size;
}

template<typename T>
Array<T>::~Array(void) {
	delete[] arr;
}

template<typename T>
Array<T> Array<T>::operator = (const Array &src) {
	this->arr = src.arr;
	this->m_size = src.m_size;
	return *this;
}

template<typename T>
int Array<T>::size(void) {
	unsigned int i = 0;
	while (i < this->m_size)
		i++;
	return i;
}

template<typename T>
T& Array<T>::operator [] (unsigned int i) {
	if (i >= m_size)
		throw "out of range";
	return arr[i];
}

#endif
