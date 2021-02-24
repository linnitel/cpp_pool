
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

protected:
    std::string _name;
    int _hitPoints;
    int _maxHitPoints;
    int _energyPoints;
    int _maxEnergyPoints;
    int _level;
    int _meleeDamage;
    int _rangeDamage;
    int _armorDamageReduction;

public:
    ClapTrap(std::string const &name);
	ClapTrap(std::string const &name, int hitP, int maxHit, int energy, int maxEnergy,
	int level, int meleeDmg, int rangeDmg, int armor);
    ClapTrap(ClapTrap &trap);
    virtual ~ClapTrap();

    void operator=(const ClapTrap &C);

    std::string getName() const;
    int getHitPoints() const;
	int getMaxHitPoints() const;
	int getEnergyPoints() const;
	int getMaxEnergyPoints() const;
    int getLevel() const;
    int getMeleeDamage() const;
    int getRangeDamage() const;
    int getArmorDamageReduction() const;

    void setName(std::string const &name);
    void setHitPoints(int const &hit);
	void setMaxHitPoints(int const &hit);
	void setEnergyPoints(int const &energy);
	void setMaxEnergyPoints(int const &energy);
    void setLevel(int const &level);
    void setMeleeDamage(int const &melee);
    void setRangeDamage(int const &range);
    void setArmorDamageReduction(int const &armor);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
