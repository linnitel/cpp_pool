
#include "myPhoneBook.class.hpp"

myPhoneBook::myPhoneBook(): _contact_num(0) {
}

myPhoneBook::~myPhoneBook() {
}

void myPhoneBook::addPerson(){
    if (_contact_num < CONTACT_SIZE) {
        std::string contct[NUM_COLUMN];
        std::cout << std::setw (50);
        std::cout << "||| Please add new contact data               |||" << std::endl;
        for (int i = 0; i < NUM_COLUMN; i++) {
            std::cout << this->_person[_contact_num].getContactName(i) << ": ";
            std::cin >> contct[i];
            this->_person[_contact_num].setContact(i, contct[i]);
        }
        _contact_num++;
    }
    else {
        std::cout << "||| Sorry, the contact list is full. You can still use commands SEARCH and EXIT |||" << std::endl;
    }
}

void myPhoneBook::_printAll() const{
    int print;
    std::cout << "—————————— —————————— —————————— ——————————" << std::endl;
    for (int i = 0; i < _contact_num; i++) {
        std::cout << std::setw(COLUMN_SIZE);
        std::cout << i << "|";
        for (int j = 0; j < NUM_COLUMN_PRINT; j++) {
            if (this->_person[i].getContact(j).length() <= COLUMN_SIZE - 1)
            	print = COLUMN_SIZE;
            else
            	print = COLUMN_SIZE - 1;
			std::cout << std::setw(print);
			std::cout << this->_person[i].getContact(j).substr(0,COLUMN_SIZE - 1);
			if (print < COLUMN_SIZE)
            	std::cout << '.';
            std::cout << "|";
        }
        std::cout << std::endl;
    }
    std::cout << "—————————— —————————— —————————— ——————————" << std::endl;
}

void myPhoneBook::_printPerson(int i) const{
    for (int j = 0; j < NUM_COLUMN; j++) {
        std::cout << this->_person[i].getContactName(j) << ": ";
        std::cout << this->_person[i].getContact(j) << std::endl;
    }
}

void myPhoneBook::searchPerson() const{
    int i;
    if (_contact_num == 0) {
        std::cout << "There are no contacts to search. Please add some contacts first" << std::endl;
        return;
    }
    this->_printAll();
    std::cout << "Specify the index of the contact:";
    std::cin >> i;
    while (std::cin.fail() || i >= _contact_num || i < 0) {
        std::cout << "Wrong input. Please enter a valid index" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> i;
    }
    this->_printPerson(i);
}