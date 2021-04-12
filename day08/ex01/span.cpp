
#include "span.hpp"

Span::Span(): _N(0), _span(std::vector<int>(0)) {
}

Span::Span(unsigned int N): _N(N), _span(std::vector<int>(0)) {
}

Span::Span(const Span &span) {
	*this = span;
}

Span::~Span() {
}

Span & Span::operator=(const Span &span) {
	this->_N = span._N;
	this->_span.assign(span._span.begin(), span._span.end());
	return *this;
}

void Span::addNumber(const int &num) {
	if (this->_span.size() + 1 > this->_N) {
		throw Span::AlreadyNElementsException();
	}
	this->_span.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	this->_span.assign(begin, end);
}

int Span::shortestSpan() const {
	if (this->_span.size() < 2) {
		throw Span::NotEnoughElementsException();
	}
	std::vector<int> sortSpan;
	sortSpan.assign(this->_span.begin(), this->_span.end());
	std::sort(sortSpan.begin(), sortSpan.end());
	std::vector<int>::const_iterator spanBegin = sortSpan.begin();
	return *(spanBegin + 1) - *spanBegin;
}

int Span::longestSpan() const {
	if (this->_span.size() < 2) {
		throw Span::NotEnoughElementsException();
	}
	std::vector<int> sortSpan;
	sortSpan.assign(this->_span.begin(), this->_span.end());
	std::sort(sortSpan.begin(), sortSpan.end());
	std::vector<int>::const_iterator spanBegin = sortSpan.begin();
	std::vector<int>::const_iterator spanEnd = sortSpan.end();
	spanEnd--;
	return *spanEnd - *spanBegin;
}

const char *Span::AlreadyNElementsException::what() const throw() {
	return ("Error: Can't add an element to the span, because it is full");
}

const char *Span::NotEnoughElementsException::what() const throw() {
	return ("Error: There are not enough elements to calculate the span");
}

