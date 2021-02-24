
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# define MAX_F_HIT_P 100
# define MAX_F_ENERGY_P 100

class FragTrap {

private:
    std::string _name;
    int _hitPoints;
    const static int _maxHitPoints = MAX_F_HIT_P;
    int _energyPoints;
    const static int _maxEnergyPoints = MAX_F_ENERGY_P;
    int _level;
    int _meleeDamage;
    int _rangeDamage;
    int _armorDamageReduction;

    void _danceToDeath(std::string const & target);
    void _hitWithHead(std::string const & target);
    void _unfairKick(std::string const & target);
    void _throwYourArm(std::string const & target);
    void _stunningWithUltrasound(std::string const & target);

public:
    FragTrap(std::string const &name);
    FragTrap(FragTrap &trap);
    ~FragTrap();

    void operator=(const FragTrap &F);

    std::string getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getLevel() const;
    int getMeleeDamage() const;
    int getRangeDamage() const;
    int getArmorDamageReduction() const;

    void setName(std::string const &name);
    void setHitPoints(int const &hit);
    void setEnergyPoints(int const &energy);
    void setLevel(int const &level);
    void setMeleeDamage(int const &melee);
    void setRangeDamage(int const &range);
    void setArmorDamageReduction(int const &armor);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int vaulthunter_dot_exe(std::string const & target);
};

#endif
