
#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Brain.hpp"

class Human {

private:
    const Brain _brain;

public:
    Human();
    ~Human();

    const Brain &getBrain() const;
    std::string identify() const;
};

#endif
