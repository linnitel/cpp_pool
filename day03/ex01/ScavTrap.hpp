
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# define MAX_S_HIT_P 100
# define MAX_S_ENERGY_P 50

class ScavTrap {

private:
    std::string _name;
    int _hitPoints;
    const static int _maxHitPoints = MAX_S_HIT_P;
    int _energyPoints;
    const static int _maxEnergyPoints = MAX_S_ENERGY_P;
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
    ScavTrap(std::string const &name);
    ScavTrap(ScavTrap &trap);
    ~ScavTrap();

    void operator=(const ScavTrap &F);

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
    void challengeNewcomer(std::string const & target);
};

#endif
