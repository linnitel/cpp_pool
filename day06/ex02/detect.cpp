
#include <iostream>
#include "Base.hpp"

Base *generate(void) {
	int num = std::rand() % 3;
	switch (num) {
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void identify_from_pointer(Base *p) {
	A *pA = dynamic_cast<A *>(p);
	if (pA != 0) {
		std::cout << "Class is A" << std::endl;
		return ;
	}
	B *pB = dynamic_cast<B *>(p);
	if (pB != 0) {
		std::cout << "Class is B" << std::endl;
		return ;
	}
	C *pC = dynamic_cast<C *>(p);
	if (pC != 0) {
		std::cout << "Class is C" << std::endl;
		return ;
	}
}

void identify_from_reference(Base &p) {
	try {
		A &pA = dynamic_cast<A &>(p);
		(void)pA;
		std::cout << "Class is A" << std::endl;
	}
	catch (std::bad_cast &badCast) {
	}
	try {
		B &pB = dynamic_cast<B &>(p);
		(void)pB;
		std::cout << "Class is B" << std::endl;
	}
	catch (std::bad_cast &badCast) {
	}
	try {
		C &pC = dynamic_cast<C &>(p);
		(void)pC;
		std::cout << "Class is C" << std::endl;
	}
	catch (std::bad_cast &badCast) {
	}
}

int main() {
	std::srand(std::time(0));
	Base *b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;
	return 0;
}