
#include <iostream>
#include "iter.hpp"

class Awesome {

public:
	Awesome(void) : _n(42) { return; }

	int getN() const { return this->_n; }

private:
	int _n;
};

std::ostream & operator<<(std::ostream &os, const Awesome &awesome) {
	os << awesome.getN();
	return os;
}

template<typename T>
void print( T const &x) {
	std::cout << x << std::endl;
	return ;
}

void plusTwo(int const &num) {
	int numTwo = num + 2;
	std::cout << numTwo;
}

void plusTwo(char const &c) {
	char cTwo = c + 2;
	std::cout << cTwo;
}

int main() {
	int i = 5;
	int intArray[5] = {1, 3, 2, 5, 4};
	for (int k = 0; k < 5; k++) {
		std::cout << intArray[k];
	}
	std::cout << std::endl;
	iter(intArray, i, &plusTwo);
	std::cout << std::endl;
	size_t j = 5;
	char charArray[5] = {'F', 'H', 'P', 'l', 'q'};
	std::cout << charArray << std::endl;
	iter(charArray, j, &plusTwo);
	std::cout << std::endl;
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];
	iter(tab, 5, print);
	iter(tab2, 5, print);
	return 0;
}
