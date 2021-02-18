
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

private:
    std::string _name;
    std::string _type;

public:
    Zombie();
    Zombie(std::string const &name, std::string const &type);
    ~Zombie();

    std::string getName() const;
    std::string getType() const;
    void setName(std::string name);
    void setType(std::string type);
    void announce();
};

#endif
