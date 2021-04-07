
#ifndef CONVERTION_HPP
# define CONVERTION_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>

#define MAX_INT 2147483647
#define MIN_INT -2147483648
#define MAX_CHAR 128
#define MIN_CHAR -128
#define MIN_DISPL_CHAR 32
#define MAX_DISPL_CHAR 127

#define CHAR 'C'
#define INT 'I'
#define FLOAT 'F'
#define DOUBLE 'D'

class Convertion {

private:
	std::string _init;
	char _c;
	int _num;
	float _fNum;
	double _dNum;
	std::string _cStr;
	std::string _iStr;
	std::string _fStr;
	std::string _dStr;
	char _initType;

	void operator=(const Convertion &conv);

	int _tryChar(const std::string &init);
	int _tryInt(const std::string &init);
	int _tryFloatDouble(const std::string &init);
	void _converFromChar();
	void _convertFromInt();
	void _convertFromFloat();
	void _convertFromDouble();

public:
	Convertion();
	Convertion(Convertion const &conv);
	~Convertion();

	char getC() const;
	int getNum() const;
	float getFNum() const;
	double getDNum() const;
	std::string getInit() const;
	char getInitType() const;
	std::string getCStr() const;
	std::string getIStr() const;
	std::string getFStr() const;
	std::string getDStr() const;


	void convertStr(std::string const &init);

	class WrongTypeException: public std::exception {
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream &os, const Convertion &conv);

#endif
