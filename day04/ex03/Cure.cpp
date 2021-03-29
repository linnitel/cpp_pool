
#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
}

Cure::~Cure() {
}

Cure::Cure(const Cure &cure): AMateria("cure") {
	*this = cure;
}

void Cure::operator=(const Cure &C) {
	AMateria::operator=(C);
}

Cure * Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter &target) {
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
		AMateria::use(target);
}