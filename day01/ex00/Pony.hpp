
#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {

private:

    std::string _name;
    std::string _color;
    std::string _favFood;
    std::string _magic;
    int _numLegs;
    int _age;

public:
    Pony(std::string _name, std::string _color, std::string _favFood, std::string _magic, int _numLegs, int _age, std::string cry);
    ~Pony();

    std::string getName() const;
    std::string getColor() const;
    std::string getFavFood() const;
    std::string getMagic() const;
    int getNumLegs() const;
    int getAge() const;

    void setName(std::string name);
    void setColor(std::string color);
    void setFavFood(std::string food);
    void setMagic(std::string magic);
    void setNumLegs(int legs);
    void setAge(int age);

    void PonyCry(std::string cry) const;
    void PonyFeed(std::string food) const;
};

#endif
