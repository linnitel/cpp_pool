
#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer {

private:
    std::string _name;
    std::string _title;
    Sorcerer();

public:
    Sorcerer(std::string const &name, std::string const &title);
    Sorcerer(Sorcerer &sorcerer);
    ~Sorcerer();

    void operator=(const Sorcerer &S);

    std::string getName() const;
    std::string getTitle() const;

    void setName(std::string const &name);
    void setTitle(std::string const &title);

    virtual void polymorph(Victim const &victim);

};

std::ostream & operator<<(std::ostream & os, const Sorcerer &S);

#endif
