
#ifndef MYPHONEBOOK_H
#define MYPHONEBOOK_H

#include "Contact.h"

class myPhoneBook {

private:
    Contact person;


public:
    myPhoneBook (void);
    ~myPhoneBook (void);

    void setContact (void);
    void getContact (void);
};

#endif
