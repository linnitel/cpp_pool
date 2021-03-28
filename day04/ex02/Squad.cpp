
#include "Squad.hpp"

Squad::Squad(): _count(0), _squad(NULL) {
}

Squad::Squad(Squad const &squad): _count(0) {
	this->_squad = _newSquad(squad.getCount());
	this->_count = squad.getCount();
	_copySquad(squad);
}

Squad::~Squad() {
	_deleteSquad();
}

void Squad::_deleteSquad() {
	for(int i = 0; i < this->_count; i++) {
		delete this->_squad[i];
	}
	delete _squad;
}

ISpaceMarine **Squad::_newSquad(int count) {
	ISpaceMarine **temp = new ISpaceMarine*[count];
	return temp;
}

void Squad::_copySquad(const Squad &S) {
	for(int i = 0; i < this->_count; i++) {
		this->_squad[i] = S.getUnit(i);
	}
}

void Squad::_copySquad(ISpaceMarine** S) {
	for(int i = 0; i < this->_count; i++) {
		this->_squad[i] = S[i];
	}
}

void Squad::operator=(const Squad &S) {
	if (this->_count != 0)
		_deleteSquad();
	this->_squad = _newSquad(S.getCount());
	this->_count = S.getCount();
	_copySquad(S);
}

int Squad::getCount() const {
	return (this->_count);
}

ISpaceMarine *Squad::getUnit(int n) const {
	if (n >= 0 && n < this->_count)
		return (this->_squad[n]);
	return NULL;
}

bool Squad::_searchMarine(ISpaceMarine *marine) {
	if (marine) {
		for (int i = 0; i < this->_count; i++) {
			if (this->_squad[i] == marine)
				return true;
		}
		return false;
	}
	return true;
}

int Squad::push(ISpaceMarine* marine) {
	if (marine && !_searchMarine(marine)) {
		ISpaceMarine** temp = this->_squad;
		this->_squad = _newSquad(this->_count + 1);
		if (this->_count != 0) {
			_copySquad(temp);
		}
		this->_squad[this->_count] = marine;
		this->_count++;
	}
	return this->_count;
}