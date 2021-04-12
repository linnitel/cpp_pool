
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <list>
# include <map>
# include <vector>

class NoElementException: public std::exception {
	virtual const char *what() const throw() {
		return ("No such element in the sequence");
	}
};

template<typename T>
typename T::iterator easyfind(T &list, int num) {
	typename T::iterator iterPtr = std::find(list.begin(), list.end(), num);
	if (iterPtr == list.end()) {
		throw NoElementException();
	}
	return iterPtr;
}

#endif
