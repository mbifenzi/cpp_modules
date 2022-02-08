
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
template <typename T>
void	iter(T* array, int len, void (*func)(T const &))
{
	for (int i = 0; i < len; i++)
	{
		func(array[i]);
	}
}

template <typename T>
void	func(T& array)
{
	std::cout << array << std::endl;
}

#endif