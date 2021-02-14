
#include <iostream>
#include <string>
#include "myPhoneBook.class.hpp"

myPhoneBook::myPhoneBook(void): contact_num(0), _varNames[2]("First name"), _varNames[3]("Last name"),
    _varNames[4]("Nickname"), _varNames[5]("Login"), _varNames[6]("Postal address"), _varNames[7]("Email address"),
    _varNames[8]("Phone number"), _varNames[9]("Birthday"), _varNames[10]("Favorite Meal"),
    _varNames[10]("Underwear color"), _varNames[10]("Darkest secret") {
}

myPhoneBook::~myPhoneBook(void) {
}

void myPhoneBook::addPerson (){
    if (contact_num < 8) {
        std::string person[11];
        std::cout << "||| Please add new contact data |||" << std::endl;
        for (int i = 0; i <= contact_num; i++) {
            std::cout << this->_varNames[i] << ": ";
            std::cin >> person[i];
            std::cout << std::endl;
        }
        this->_person[contact_num].setFirstName;
        contact_num++;
    }
    else
}