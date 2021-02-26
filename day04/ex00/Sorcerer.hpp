
#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>

class Sorcerer {

private:
    std::string _name;
    std::string _title;

public:
    Sorcerer(std::string const &name, std::string const &title);
    Sorcerer(Sorcerer &sorcerer);
    ~Sorcerer();

    void operator=(const Sorcerer &S);

    std::string getName() const;
    std::string getTitle() const;

    void setName(std::string const &name);
    void setTitle(std::string const &title);

};

std::ostream & operator<<(std::ostream & os, const Sorcerer &S);

#endif
