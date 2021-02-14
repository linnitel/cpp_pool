#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <string>

class Contact {

private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _login;
    std::string _postalAddress;
    std::string _emailAddress;
    std::string _phoneNumber;
    std::string _birthday;
    std::string _favoriteMeal;
    std::string _underwearColor;
    std::string _darkestSecret;

public:
    Contact(void);
    ~Contact(void);

    const std::string getFirstName (void);
    const std::string getLastName (void);
    const std::string getNickname (void);
    const std::string getLogin (void);
    const std::string getPostalAddress (void);
    const std::string getEmailAddress (void);
    const std::string getPhoneNumber (void);
    const std::string getBirthday (void);
    const std::string getFavoriteMeal (void);
    const std::string getUnderwearColor (void);
    const std::string getDarkestSecret (void);
    void setFirstName (std::string input);
    void setLastName (std::string input);
    void setNickname (std::string input);
    void setLogin (std::string input);
    void setPostalAddress (std::string input);
    void setEmailAddress (std::string input);
    void setPhoneNumber (std::string input);
    void setBirthday (std::string input);
    void setFavoriteMeal (std::string input);
    void setUnderwearColor (std::string input);
    void setDarkestSecret (std::string input);

    void addContact(std::string person[11]);
};

#endif
