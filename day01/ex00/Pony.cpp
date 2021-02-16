
# include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string food, std::string magic, int legs, int age, std::string cry): _name(name), _color(color), _favFood(food), _magic(magic), _numLegs(legs), _age(age) {
    PonyCry(cry);
}

Pony::~Pony() {
    PonyCry("BUY, BUY!");
}

std::string Pony::getName() const {
    return (this->_name);
}

std::string Pony::getColor() const {
    return (this->_color);
}

std::string Pony::getFavFood() const {
    return (this->_favFood);
}

std::string Pony::getMagic() const {
    return (this->_magic);
}

int Pony::getNumLegs() const {
    return (this->_numLegs);
}

int Pony::getAge() const {
    return (this->_age);
}

void Pony::setName(std::string name) {
    this->_name = name;
}

void Pony::setColor(std::string color) {
    this->_color = color;
}

void Pony::setFavFood(std::string food) {
    this->_favFood = food;
}

void Pony::setMagic(std::string magic) {
    this->_magic = magic;
}

void Pony::setNumLegs(int legs) {
    this->_numLegs = legs;
}

void Pony::setAge(int age) {
    this->_age = age;
}

void Pony::PonyCry(std::string cry) const {
    std::cout << cry << std::endl;
}

void Pony::PonyFeed(std::string food) const {
    if (food == this->_favFood)
        std::cout << "THANKS FOR " << food << "! I LOVE THIS!!!" << std::endl;
    else
        std::cout << "I DONT LIKE " << food << ", GIVE ME SOME " << _favFood << "!!!" << std::endl;
}