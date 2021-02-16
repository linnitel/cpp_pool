#include "Field.class.hpp"

Field::Field() {
}

Field::~Field() {
}

void Field::setFieldName(std::string name) {
    this->_fieldName = name;
}

void Field::setFieldValue(std::string input) {
    this->_fieldValue = input;
}

std::string Field::getFieldName() const {
    return (this->_fieldName);
}

std::string Field::getFieldValue() const {
    return (this->_fieldValue);
}