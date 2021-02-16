
#include "Contact.class.hpp"

Contact::Contact() {
    this->_contact[0].setFieldName("First name");
    this->_contact[1].setFieldName("Last name");
    this->_contact[2].setFieldName("Nickname");
    this->_contact[3].setFieldName("Login");
    this->_contact[4].setFieldName("Postal address");
    this->_contact[5].setFieldName("Email address");
    this->_contact[6].setFieldName("Phone number");
    this->_contact[7].setFieldName("Birthday");
    this->_contact[8].setFieldName("Favorite Meal");
    this->_contact[9].setFieldName("Underwear color");
    this->_contact[10].setFieldName("Darkest secret");
}

Contact::~Contact() {
}

void Contact::setContact(int i, std::string input) {
    this->_contact[i].setFieldValue(input);
}

std::string Contact::getContact(int i) const{
    return (this->_contact[i].getFieldValue());
}

std::string Contact::getContactName(int i) const{
    return (this->_contact[i].getFieldName());
}
