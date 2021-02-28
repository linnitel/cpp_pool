
#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim {

private:
    Victim();

protected:
    std::string _name;

public:
    Victim(std::string const &name);
    Victim(Victim &trap);
    virtual ~Victim();

    void operator=(const Victim &V);

    std::string getName() const;
    void setName(std::string const &name);

    virtual void getPolymorphed() const;

};

std::ostream & operator<<(std::ostream & os, const Victim &V);

#endif
