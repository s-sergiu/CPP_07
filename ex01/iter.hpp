
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T_ARR>
void iterate(T_ARR &arg) {
	std::cout<<arg<<std::endl;
}

template<typename T_ARR, typename T_SIZE>
void iter(T_ARR *arr, T_SIZE size, void(*func)(T_ARR&)) {
	for (int i = 0; i < size; i++)
		func(arr[i]);
}

#endif
