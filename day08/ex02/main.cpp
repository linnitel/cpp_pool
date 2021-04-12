
#include <iostream>
#include "mutantstack.hpp"

int main() {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(6);
	mstack.push(19);
	mstack.push(32);
	mstack.push(117);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << std::endl;
	std::cout << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::stack<int> s(mstack);
	s.push(42);
	s.push(21);
	std::cout << s.top() << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	MutantStack<int>::const_iterator itConst = mstack.begin();
	MutantStack<int>::const_iterator iteConst = mstack.end();
	++itConst;
	--itConst;
	while (itConst != iteConst)
	{
		std::cout << *itConst << std::endl;
		++itConst;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	MutantStack<int>::const_reverse_iterator itRevConst = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator iteRevConst = mstack.rend();
	++itRevConst;
	--itRevConst;
	while (itRevConst != iteRevConst)
	{
		std::cout << *itRevConst << std::endl;
		++itRevConst;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	MutantStack<int>::const_reverse_iterator itRev = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator iteRev = mstack.rend();
	++itRev;
	--itRev;
	while (itRev != iteRev)
	{
		std::cout << *itRev << std::endl;
		++itRev;
	}
	return 0;
}
