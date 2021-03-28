
#include "Character.hpp"

Character::Character(): _name("me"), _num(0) {
	for(int i = 0; i < MAX_MATERIA; i++) {
		this->_materia[i] = NULL;
	}
}

Character::Character(const std::string &name): _name(name), _num(0) {
	for(int i = 0; i < MAX_MATERIA; i++) {
		this->_materia[i] = NULL;
	}
}

Character::~Character() {
}

Character::Character(const Character &character) {
	*this = character;
}

void Character::operator=(const Character &C) {

}

const std::string & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {

}

void Character::unequip(int idx) {

}

void Character::use(int idx, ICharacter &target) {

}