#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include "Field.class.hpp"

# define NUM_COLUMN 11

class Contact {

private:
    Field _contact[NUM_COLUMN];

public:
    Contact();
    ~Contact();

    void setContact(int i, std::string input);
    std::string getContact(int i) const;
    std::string getContactName(int i) const;
};

#endif