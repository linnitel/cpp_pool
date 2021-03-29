
#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {

private:
    Peon();

public:
    Peon(std::string const &name);
    Peon(Peon const &peon);
    virtual ~Peon();

    void operator=(const Peon &P);

    void getPolymorphed() const;
};

#endif
