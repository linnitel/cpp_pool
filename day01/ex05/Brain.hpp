
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain {

private:
    std::string _name;
    std::string _colour;
    std::string _memory;
    std::string _IQ;

public:
    Brain();
    Brain(std::string name, std::string colour, std::string memory, std::string IQ);
    ~Brain();

    std::string identify() const;

};

#endif
