
#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : virtual public Victim {

private:
    Peon();

public:
    Peon(std::string const &name);
    Peon(Peon &trap);
    virtual ~Peon();

    void operator=(const Peon &C);

    void getPolymorphed() const;
};

#endif
