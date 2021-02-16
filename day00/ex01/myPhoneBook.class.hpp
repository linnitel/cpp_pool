
#ifndef MYPHONEBOOK_CLASS_HPP
# define MYPHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include <iostream>
# include <string>
# define CONTACT_SIZE 8
# define COLUMN_SIZE 10
# define NUM_COLUMN_PRINT 3

class myPhoneBook {

private:
    Contact _person[CONTACT_SIZE];
    int _contact_num;

    void _printAll() const;
    void _printPerson(int i) const;

public:
    myPhoneBook();
    ~myPhoneBook();

    void addPerson();
    void searchPerson() const;
};

#endif
