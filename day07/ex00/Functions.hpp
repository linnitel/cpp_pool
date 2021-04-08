
#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

#include <iostream>

template<typename T>
T const & max(T const & a, T const & b) {
	return (a > b ? a : b);
}

template<typename T>
T const & min(T const & a, T const & b) {
	return (a >= b ? b : a);
}

template<typename T>
void swap(T & a, T & b) {
	T temp = b;
	b = a;
	a = temp;
}

#endif
