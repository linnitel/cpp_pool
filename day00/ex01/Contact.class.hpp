#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# define NUM_COLUM 11
typedef  void (Contact::*ContactGetFn)(std::string input);
typedef  std::string (Contact::*ContactSetFn)(void);

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

    std::string getFirstName (void);
    std::string getLastName (void);
    std::string getNickname (void);
    std::string getLogin (void);
    std::string getPostalAddress (void);
    std::string getEmailAddress (void);
    std::string getPhoneNumber (void);
    std::string getBirthday (void);
    std::string getFavoriteMeal (void);
    std::string getUnderwearColor (void);
    std::string getDarkestSecret (void);
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
};

#endif
