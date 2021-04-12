
#ifndef A_HPP
# define A_HPP

#include <iostream>

class A {
public:
	int a;

	A();
	A(A const &A);
	~A();
	A &operator=(A const &A);
};

std::ostream & operator<<(std::ostream &os, const A &A);

#endif
