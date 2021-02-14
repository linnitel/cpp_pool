
#ifndef MYPHONEBOOK_CLASS_HPP
#define MYPHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class myPhoneBook {

private:
    Contact _person[8];
    int contact_num;
    const std::string _varNames[11];
    void *_func[11];

public:
    myPhoneBook (void);
    ~myPhoneBook (void);

    void addPerson (void);
    void printPerson (void) const;
    void searchPerson (std::string name) const;
};

#endif
