
#include <iostream>
#include "Array.hpp"
#include "A.hpp"

int main() {
	Array<int> intArray(5);
	std::cout << intArray[0] << intArray[3] << intArray[4] << std::endl;
	Array<float> floatArray;
	try {
		std::cout << floatArray[5] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	intArray[3] = 6;
	std::cout << intArray[0] << intArray[3] << intArray[4] << std::endl;
	Array<A> AArray(7);
	std::cout << AArray[0] << AArray[3] << AArray[4] << std::endl;
	Array<int> intTwoArray(5);
	intTwoArray = intArray;
	std::cout << intTwoArray[0] << intTwoArray[3] << intTwoArray[4] << std::endl;
	Array<int> intThreeArray(3);
	intThreeArray[2] = 6;
	try {
		intTwoArray = intThreeArray;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
