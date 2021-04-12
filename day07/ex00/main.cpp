
#include "Functions.hpp"

class Awesome {

public:
	Awesome(int n): _n(n) {}
	int getN() const { return this->_n; }
	bool operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
	bool operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); }
	bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
	bool operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n); }
	bool operator<(Awesome const &rhs) const { return (this->_n < rhs._n); }
	bool operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n); }

private:
	int _n;
};

std::ostream & operator<<(std::ostream &os, const Awesome &awesome) {
	os << awesome.getN();
	return os;
}

int main() {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	float e = 2.789;
	float f = 2.788;
	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	char g = 'g';
	char h = 'H';
	::swap( g, h );
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;
	Awesome aw(5);
	Awesome awTwo(9);
	::swap( aw, awTwo );
	std::cout << "aw = " << aw << ", awTwo = " << awTwo << std::endl;
	std::cout << "min( aw, awTwo ) = " << ::min( aw, awTwo ) << std::endl;
	std::cout << "max( aw, awTwo ) = " << ::max( aw, awTwo ) << std::endl;
	return 0;
}
