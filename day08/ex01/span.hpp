
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span {

private:
	unsigned int _N;
	std::vector<int> _span;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &span);
	~Span();

	Span &operator=(const Span &span);

	void addNumber(int const &num);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan() const;
	int longestSpan() const;

	class AlreadyNElementsException: public std::exception {
		virtual const char* what() const throw();
	};

	class NotEnoughElementsException: public std::exception {
		virtual const char* what() const throw();
	};
};

#endif
