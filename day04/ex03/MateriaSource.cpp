
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for(int i = 0; i < MAX_MATERIA; i++) {
		this->_source[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for(int i = 0; i < MAX_MATERIA; i++) {
		if (this->_source[i] != NULL) {
			delete this->_source[i];
			this->_source[i] = NULL;
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource &materia) {
	*this = materia;
}

void MateriaSource::operator=(const MateriaSource &MS) {
	for(int i = 0; i < MAX_MATERIA; i++) {
		if (this->_source[i] != NULL) {
			delete this->_source[i];
			this->_source[i] = NULL;
		}
	}
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (materia != NULL) {
		for (int i = 0; i < MAX_MATERIA; i++) {
			if (this->_source[i] == NULL) {
				this->_source[i] = materia;
				return ;
			}
		}
	}
}

AMateria * MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; this->_source[i] != NULL; i++) {
		if (this->_source[i]->getType() == type) {
			return (this->_source[i]->clone());
		}
	}
	return 0;
}