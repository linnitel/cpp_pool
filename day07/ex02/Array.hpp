
#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array {

private:
	T *_array;
	unsigned int _n;

public:
	Array(): _array(new T[0]()), _n(0) {}
	Array(unsigned int n): _array(new T[n]()), _n(n) {}
	Array(Array<T> const &A): { *this = A; }
	~Array() { delete[] _array; }

	Array<T> &operator=(Array<T> const &A) {
		if (_array) { delete[] _array; }
		for (unsigned int i = 0; i < A.getN(); i++) {
			this->_array[i] = new (A[i]);
		}
		return *this;
	}

	T &operator[](unsigned int i) {
		if (i > this->_n) {
			throw Array<T>::BeyondLimitsException();
		}
		return this->_array[i];
	}

	unsigned int const &getN() const { return this->_n; }

	class BeyondLimitsException: public std::exception {
		virtual const char* what() const throw() {
			return ("Error: The element is out of the limits");
		}
	};

	unsigned int size() const;

};

#endif
