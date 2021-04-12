
#include <iostream>
#include <algorithm>
# include <list>
# include <map>
# include <vector>
#include "easyfind.hpp"

int main() {
	std::list<int> myList(5);
	myList.push_back(1);
	myList.push_back(3);
	myList.push_back(6);
	myList.push_back(7);
	myList.push_back(6);
	std::vector<int> myVector(5);
	myVector.push_back(1);
	myVector.push_back(3);
	myVector.push_back(6);
	myVector.push_back(7);
	myVector.push_back(6);
	try {
		std::cout << *easyfind(myList, 6);
		std::cout << " was found in the sequence" << std::endl;
		std::cout << *easyfind(myVector, 3);
		std::cout << " was found in the sequence" << std::endl;
		std::cout << *easyfind(myVector, 10);
		std::cout << " was found in the sequence" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
