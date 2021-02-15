
#include "myPhoneBook.class.hpp"

myPhoneBook::myPhoneBook(void): _contact_num(0) {
    this->_varNames[0] = "First name";
    this->_varNames[1] = "Last name";
    this->_varNames[2] = "Nickname";
    this->_varNames[3] = "Login";
    this->_varNames[4] = "Postal address";
    this->_varNames[5] = "Email address";
    this->_varNames[6] = "Phone number";
    this->_varNames[7] = "Birthday";
    this->_varNames[8] = "Favorite Meal";
    this->_varNames[9] = "Underwear color";
    this->_varNames[10] = "Darkest secret";
}

myPhoneBook::~myPhoneBook(void) {
}

void myPhoneBook::addPerson(void){
    if (_contact_num <= CONTACT_SIZE) {
        std::string person[NUM_COLUM];
        std::cout << "||| Please add new contact data |||" << std::endl;
        for (int i = 0; i < NUM_COLUM; i++) {
            std::cout << this->_varNames[i] << ": ";
            std::cin >> person[i];
            std::cout << std::endl;
            this->_person[_contact_num].func_set[i](person[i]);
        }
        _contact_num++;
    }
    else {
        std::cout << "||| Sorry, the contact list is full. You can still use commands SEARCH and EXIT |||" << std::endl;
    }
}

void myPhoneBook::_printAll(void) const{
    int len;
    std::cout << "—————————— —————————— —————————— ——————————" << std::endl;
    for (int i = 0; i <= _contact_num; i++) {
        std::cout.width(COLUMN_SIZE);
        std::cout << i << "|";
        for (int j = 0; j < NUM_COLUM_PRINT; j++) {
            std::cout.width(COLUMN_SIZE - 1);
            std::cout << this->_person[i].func_get[j];
            if ((len = this->_person[i].func_get[j]().length()) < COLUMN_SIZE - 1) {
                for (int k = len; k < COLUMN_SIZE; k++)
                    std::cout << ' ';
            }
            else
                std::cout << '.';
            std::cout << "|" << std::endl;
        }
    }
    std::cout << "—————————— —————————— —————————— ——————————" << std::endl;
}

void myPhoneBook::_printPerson(int i) const{
    for (int j = 0; j < NUM_COLUM; j++) {
        std::cout << this->_varNames[j] << ": ";
        std::cout << this->_person[i].func_get[j] << std::endl;
    }
}

void myPhoneBook::searchPerson(void) const{
    int i;
    this->_printAll();
    std::cout << "Specify the index of the contact:";
    std::cin >> i;
    while (std::cin.fail() || i >= CONTACT_SIZE) {
        std::cout << "Wrong input. Please enter a valid index" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> i;
    }
    this->_printPerson(i);
}