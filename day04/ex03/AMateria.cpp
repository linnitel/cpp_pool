
#include "AMateria.hpp"

AMateria::AMateria(): _type("pure"), _xp(0){
}

AMateria::AMateria(std::string const & type): _type(type), _xp(0) {
}

AMateria::~AMateria() {
}

AMateria::AMateria(const AMateria &materia) {
	*this = materia;
}

void AMateria::operator=(const AMateria &AM) {
	this->_xp = AM._xp;
}

unsigned int AMateria::getXP() const {
	return this->_xp;
}

std::string const &AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter &target) {
	(void)target;
	this->_xp += XP_ICR;
}