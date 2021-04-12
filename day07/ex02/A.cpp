
#include "A.hpp"

A::A(): a(21) {
}

A::A(A const &A): a(A.a) {
	*this = A;
}

A::~A() {

}

A &A::operator=(A const &A) {
	this->a = A.a;
	return *this;
}

std::ostream & operator<<(std::ostream &os, const A &A) {
	os << A.a << std::endl;
	return os;
}