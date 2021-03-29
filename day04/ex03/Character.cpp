
#include "Character.hpp"

Character::Character(): _name("me") {
	for(int i = 0; i < MAX_MATERIA; i++) {
		this->_materia[i] = NULL;
	}
}

Character::Character(const std::string &name): _name(name) {
	for(int i = 0; i < MAX_MATERIA; i++) {
		this->_materia[i] = NULL;
	}
}

Character::~Character() {
	for(int i = 0; i < MAX_MATERIA; i++) {
		if (this->_materia[i] != NULL) {
			delete this->_materia[i];
			this->_materia[i] = NULL;
		}
	}
}

Character::Character(const Character &character) {
	*this = character;
}

void Character::operator=(const Character &C) {
	for(int i = 0; i < MAX_MATERIA; i++) {
		if (this->_materia[i] != NULL) {
			delete this->_materia[i];
			this->_materia[i] = NULL;
		}
	}
	for(int i = 0; i < MAX_MATERIA; i++) {
		this->_materia[i] = C._materia[i];
	}
	this->_name = C._name;
}

const std::string & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	if (m != NULL) {
		for (int i = 0; i < MAX_MATERIA; i++) {
			if (this->_materia[i] == NULL) {
				this->_materia[i] = m;
				return;
			}
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < MAX_MATERIA) {
		if (this->_materia[idx] != NULL) {
			this->_materia[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < MAX_MATERIA) {
		if (this->_materia[idx] != NULL) {
			this->_materia[idx]->use(target);
		}
	}
}