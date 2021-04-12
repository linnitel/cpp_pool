
#include <iostream>
#include "span.hpp"

int main() {
	std::srand(std::time(0));
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	Span spTwo = Span(21000);
	std::vector<int> random;
	for (int i = 0; i < 21000; i++) {
		random.push_back(rand() % 21000);
	}
	spTwo.addNumber(random.begin(), random.end());
	std::cout << spTwo.shortestSpan() << std::endl;
	std::cout << spTwo.longestSpan() << std::endl;
	try {
		sp.addNumber(5);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	Span spZero = Span(0);
	try {
		std::cout << spZero.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	Span spOne = Span(1);
	spOne.addNumber(5);
	try {
		std::cout << spOne.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
