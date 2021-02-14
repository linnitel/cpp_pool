#include <iostream>
#include <string>
#include "Contact.class.hpp"

Contact::Contact(void){
}

Contact::~Contact(void) {
}

std::string Contact::getFirstName(void) {
    return (this->_firstName);
}

std::string Contact::getLastName(void) {
    return (this->_lastName);
}

std::string Contact::getNickname(void) {
    return (this->_nickname);
}

std::string Contact::getLogin(void) {
    return (this->_login);
}

std::string Contact::getLogin(void) {
    return (this->_postalAddress);
}

std::string Contact::getEmailAddress(void) {
    return (this->_emailAddress);
}

std::string Contact::getEmailAddress(void) {
    return (this->_phoneNumber);
}

std::string Contact::getEmailAddress(void) {
    return (this->_birthday);
}

std::string Contact::getFavoriteMeal(void) {
    return (this->_favoriteMeal);
}

std::string Contact::getUnderwearColor(void) {
    return (this->_underwearColor);
}

std::string Contact::getDarkestSecret(void) {
    return (this->_darkestSecret);
}

void Contact::setFirstName(std::string input) {
    this->_firstName = input;
}

void Contact::setLastName(std::string input) {
    this->_lastName = input;
}

void Contact::setNickname(std::string input) {
    this->_nickname = input;
}

void Contact::setLogin(std::string input) {
    this->_login = input;
}

void Contact::setLogin(std::string input) {
    this->_postalAddress = input;
}

void Contact::setEmailAddress(std::string input) {
    this->_emailAddress = input;
}

void Contact::setEmailAddress(std::string input) {
    this->_phoneNumber = input;
}

void Contact::setEmailAddress(std::string input) {
    this->_birthday = input;
}

void Contact::setFavoriteMeal(std::string input) {
    this->_favoriteMeal = input;
}

void Contact::setUnderwearColor(std::string input) {
    this->_underwearColor = input;
}

void Contact::setDarkestSecret(std::string input) {
    this->_darkestSecret = input;
}

void Contact::addContact(std::string person[11]){

}
