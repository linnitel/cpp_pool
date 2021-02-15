
#ifndef MYPHONEBOOK_CLASS_HPP
# define MYPHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include <iostream>
# include <string>
# define CONTACT_SIZE 8
# define COLUMN_SIZE 10
# define NUM_COLUM_PRINT 3

class myPhoneBook {

private:
    Contact _person[CONTACT_SIZE];
    int _contact_num;
    std::string _varNames[NUM_COLUM];
    void _printAll(void) const;
    void _selectOne(void) const;
    void _printPerson(int i) const;

public:
    myPhoneBook(void);
    ~myPhoneBook(void);

    void addPerson(void);
    void searchPerson(void) const;
};

#endif
