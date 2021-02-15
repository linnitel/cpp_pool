
#include "Contact.class.hpp"

Contact::Contact(void): {
}

Contact::~Contact(void) {
}

std::string Contact::getFirstName(void) const{
    return (this->_firstName);
}

std::string Contact::getLastName(void) const{
    return (this->_lastName);
}

std::string Contact::getNickname(void) const{
    return (this->_nickname);
}

std::string Contact::getLogin(void) const{
    return (this->_login);
}

std::string Contact::getLogin(void) const{
    return (this->_postalAddress);
}

std::string Contact::getEmailAddress(void) const{
    return (this->_emailAddress);
}

std::string Contact::getEmailAddress(void) const{
    return (this->_phoneNumber);
}

std::string Contact::getEmailAddress(void) const{
    return (this->_birthday);
}

std::string Contact::getFavoriteMeal(void) const{
    return (this->_favoriteMeal);
}

std::string Contact::getUnderwearColor(void) const{
    return (this->_underwearColor);
}

std::string Contact::getDarkestSecret(void) const{
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

void Contact::setPostalAddress(std::string input) {
    this->_postalAddress = input;
}

void Contact::setEmailAddress(std::string input) {
    this->_emailAddress = input;
}

void Contact::setPhoneNumber(std::string input) {
    this->_phoneNumber = input;
}

void Contact::setBirthday(std::string input) {
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