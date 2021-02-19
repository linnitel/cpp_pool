
#include "myPhoneBook.class.hpp"

myPhoneBook::myPhoneBook(): _contact_num(0) {
}

myPhoneBook::~myPhoneBook() {
}

void myPhoneBook::addPerson(){
    if (_contact_num < CONTACT_SIZE) {
        std::string contct[NUM_COLUMN];
        std::cout << "||| Please add new contact data                 |||" << std::endl;
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
    int len;
    std::cout << "—————————— —————————— —————————— ——————————" << std::endl;
    for (int i = 0; i < _contact_num; i++) {
        std::cout.width(COLUMN_SIZE);
        std::cout << i << "|";
        for (int j = 0; j < NUM_COLUMN_PRINT; j++) {
            std::cout << this->_person[i].getContact(j).substr(0,COLUMN_SIZE - 1);
            if ((len = this->_person[i].getContact(j).length()) < COLUMN_SIZE - 1) {
                for (int k = len; k < COLUMN_SIZE; k++)
                    std::cout << ' ';
            }
            else
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