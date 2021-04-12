
#include "Convertion.hpp"

Convertion::Convertion(): _c(0), _num(0), _fNum(0), _dNum(0), _cStr(""), _iStr(""),
							_fStr(""), _dStr(""), _initType('\0'), _nan(false) {
}

Convertion::Convertion(const Convertion &conv): _c(conv.getC()), _num(conv.getNum()), _fNum(conv.getFNum()),
				_dNum(conv.getDNum()), _cStr(""), _iStr(""), _fStr(""), _dStr(""), _initType('\0'), _nan(false) {
	*this = conv;
}

Convertion::~Convertion() {
}

void Convertion::operator=(const Convertion &conv) {
	this->_c = conv.getC();
	this->_num = conv.getNum();
	this->_fNum = conv.getFNum();
	this->_dNum = conv.getDNum();
	this->_initType = conv.getInitType();
	this->_nan = conv.getNan();
}

char Convertion::getC() const {
	return this->_c;
}

int Convertion::getNum() const {
	return this->_num;
}

float Convertion::getFNum() const {
	return this->_fNum;
}

double Convertion::getDNum() const {
	return this->_dNum;
}

std::string Convertion::getInit() const {
	return this->_init;
}

char Convertion::getInitType() const {
	return this->_initType;
}

std::string Convertion::getCStr() const {
	return this->_cStr;
}

std::string Convertion::getIStr() const {
	return this->_iStr;
}

std::string Convertion::getFStr() const {
	return this->_fStr;
}

std::string Convertion::getDStr() const {
	return this->_dStr;
}

bool Convertion::getNan() const {
	return this->_nan;
}

int Convertion::_tryChar(const std::string &init) {
	size_t index = init.find_first_not_of("1234567890");
	if (init.length() == 1) {
		if (index != init.npos) {
			this->_c = init[0];
			this->_initType = CHAR;
			return 1;
		}
	}
	this->_c = 0;
	return 0;
}

int Convertion::_tryInt(const std::string &init) {
	long temp;
	char *endptr;

	size_t index = init.find_first_not_of("1234567890-");
	if (index == init.npos) {
		const char *arrInit = init.c_str();
		temp = strtol(arrInit, &endptr, 10);
		if (*endptr == '\0') {
			if (temp <= INT64_MAX && temp >= INT64_MIN) {
				this->_num = static_cast<int>(temp);
				this->_initType = INT;
				return 1;
			}
		}
	}
	return 0;
}

int Convertion::_tryFloatDouble(const std::string &init) {
	char *endptr;
	size_t index = init.find_first_not_of("1234567890-f.");
	if (index == init.npos || init == "nan" || init == "+inf" || init == "-inf" || init == "nanf"
		|| init == "+inff" || init == "-inff") {
		if (init.find('f', 0) != false || init == "nanf"
			|| init == "+inff" || init == "-inff") {
			const char *arrInit = init.c_str();
			double temp = strtod(arrInit, &endptr);
			if (*endptr == 'f' && *(++endptr) == '\0') {
				this->_fNum = static_cast<float>(temp);
				this->_initType = FLOAT;
				return 1;
			}
			else if (*endptr == '\0' || init == "nan" || init == "+inf" || init == "-inf") {
				this->_dNum = static_cast<float>(temp);
				this->_initType = DOUBLE;
				return 1;
			}
		}
	}
	return 0;
}

void Convertion::_converFromChar() {
	this->_num = static_cast<int>(this->_c);
	this->_fNum = static_cast<float>(this->_c);
	this->_dNum = static_cast<double>(this->_c);
}

void Convertion::_convertFromInt() {
	if (this->_num < MIN_CHAR || this->_num > MAX_CHAR) {
		this->_cStr = "impossible";
	}
	else if (this->_num < MIN_DISPL_CHAR || this->_num > MAX_DISPL_CHAR) {
		this->_cStr = "Non displayable";
	}
	else {
		this->_c = static_cast<char>(this->_num);
	}
	this->_fNum = static_cast<float>(this->_num);
	this->_dNum = static_cast<double>(this->_num);
}

void Convertion::_convertFromFloat() {
	if (this->_fNum < MIN_CHAR || this->_fNum > MAX_CHAR || this->_nan) {
		this->_cStr = "impossible";
	}
	else if (this->_fNum < MIN_DISPL_CHAR || this->_fNum > MAX_DISPL_CHAR) {
		this->_cStr = "Non displayable";
	}
	else {
		this->_c = static_cast<char>(this->_fNum);
	}
	if (this->_fNum < static_cast<float>(MIN_INT) || this->_fNum > static_cast<float>(MAX_INT) || this->_nan) {
		this->_iStr = "impossible";
	}
	else {
		this->_num = static_cast<int>(this->_fNum);
	}
	this->_dNum = static_cast<double>(this->_fNum);
}

void Convertion::_convertFromDouble() {
	if (this->_dNum < MIN_CHAR || this->_dNum > MAX_CHAR || this->_nan) {
		this->_cStr = "impossible";
	}
	else if (this->_dNum < MIN_DISPL_CHAR || this->_dNum > MAX_DISPL_CHAR) {
		this->_cStr = "Non displayable";
	}
	else {
		this->_c = static_cast<char>(this->_dNum);
	}
	if (this->_dNum < static_cast<double>(MIN_INT) || this->_dNum > static_cast<double>(MAX_INT) || this->_nan) {
		this->_iStr = "impossible";
	}
	else {
		this->_num = static_cast<int>(this->_dNum);
	}
	this->_fNum = static_cast<float>(this->_dNum);
}

void Convertion::convertStr(const std::string &init) {
	this->_cStr = "";
	this->_iStr = "";
	this->_fStr = "";
	this->_dStr = "";
	this->_nan = false;
	if (init == "nan" || init == "nanf") {
		this->_nan = true;
	}
	if (_tryChar(init) == 1 || _tryInt(init) == 1 || _tryFloatDouble(init) == 1) {
		if (this->_initType == CHAR) {
			_converFromChar();
		}
		else if (this->_initType == INT) {
			_convertFromInt();
		}
		else if (this->_initType == FLOAT) {
			_convertFromFloat();
		}
		else {
			_convertFromDouble();
		}
	}
	else {
		throw Convertion::WrongTypeException();
	}
}

std::ostream & operator<<(std::ostream & os, const Convertion &conv) {
	os << "Initial type: " << conv.getInitType() << std::endl;
	if (conv.getCStr() == "") {
		os << "char: " << conv.getC() << std::endl;
	}
	else {
		os << "char: " << conv.getCStr() << std::endl;
	}
	if (conv.getIStr() == "") {
		os << "int: " << conv.getNum() << std::endl;
	}
	else {
		os << "int: " << conv.getIStr() << std::endl;
	}
	if (conv.getFStr() == "") {
		os << "float: " << conv.getFNum();
		if (conv.getFNum() - conv.getFNum() == static_cast<float>(conv.getFNum() - static_cast<int>(conv.getFNum()))) {
			os << ".0f" << std::endl;
		}
		else {
			os << "f" << std::endl;
		}
	}
	else {
		os << "float: " << conv.getFStr() << std::endl;
	}
	if (conv.getDStr() == "") {
		os << "double: " << conv.getDNum();
		if (conv.getDNum() - conv.getDNum() == static_cast<double>(conv.getDNum() - static_cast<int>(conv.getDNum()))) {
			os << ".0" << std::endl;
		}
		else {
			os << std::endl;
		}
	}
	else {
		os << "double: " << conv.getDStr() << std::endl;
	}
	return os;
}

const char* Convertion::WrongTypeException::what() const throw() {
	return ("Error: The argument is neither char, int float or double.");
}