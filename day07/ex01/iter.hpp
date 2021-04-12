
#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T, typename U>
void iter(U *array, T length, void (*f)(U const &arrayElement)) {
	for (T i = 0; i < length; i++) {
		(*f)(array[i]);
	}
}

#endif
