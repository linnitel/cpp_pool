#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {

private:
    string  firstName;
    string  lastName;
    string  nickname;
    string  login;
    string  emailAddress;
    string  favoriteMeal;
    string  underwearColor;
    string  darkestSecret;
    int     phoneNumber;
    int     birthday;
    int     postalAddress;

public:
    Contact (void);
    ~Contact(void);

    void setContact (void);
    void getContact (void);
};

#endif
