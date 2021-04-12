
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {

private:
	unsigned int const _n;
	T *_array;

public:
	Array(): _n(0), _array(new T[0]) {
	}

	Array(unsigned int n): _array(new T[n]), _n(n) {
	}

	Array(Array<T> const &A): _n(A.size()) {
		for (unsigned int i = 0; i < this->_n; i++) {
			this->_array[i] = A[i];
		}
		*this = A;
	}

	~Array() {
		delete[] _array;
	}

	T &operator[](unsigned int i) const{
		if (i >= this->_n) {
			throw BeyondLimitsException();
		}
		return this->_array[i];
	}

	Array<T> &operator=(Array<T> const &A) {
		if (A.size() < this->_n) {
			throw WrongArraySizeException();
		}
		for (unsigned int i = 0; i < A.size(); i++) {
			this->_array[i] = A[i];
		}
		return *this;
	}

	unsigned int size() const {
		return this->_n;
	}

	class BeyondLimitsException: public std::exception {
		virtual const char* what() const throw() {
			return ("Error: The element is out of the array limits");
		}
	};

	class WrongArraySizeException: public std::exception {
		virtual const char *what() const throw() {
			return ("Error: The array size is smaller than the original");
		}
	};
};

#endif
