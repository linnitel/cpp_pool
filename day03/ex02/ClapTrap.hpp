
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define RESET  "\x1B[0m"
# define GREEN  "\x1B[32m"
# define MAGENTA  "\x1B[35m"
# define CYAN  "\x1B[36m"

class ClapTrap {

protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _maxHitPoints;
    unsigned int _energyPoints;
    unsigned int _maxEnergyPoints;
    unsigned int _level;
    unsigned int _meleeDamage;
    unsigned int _rangeDamage;
    unsigned int _armorDamageReduction;

	unsigned int _speechReturn(unsigned int hp, unsigned int ret, const std::string textOne,
							   const std::string textTwo, const std::string textThree);

public:
	ClapTrap();
    ClapTrap(std::string const &name);
	ClapTrap(std::string const &name, unsigned int hitP, unsigned int maxHit, unsigned int energy, unsigned int maxEnergy,
	unsigned int level, unsigned int meleeDmg, unsigned int rangeDmg, unsigned int armor);
    ClapTrap(ClapTrap &trap);
    virtual ~ClapTrap();

    void operator=(const ClapTrap &C);

	std::string getName() const;
	unsigned int getHitPoints() const;
	unsigned int getMaxHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getMaxEnergyPoints() const;
	unsigned int getLevel() const;
	unsigned int getMeleeDamage() const;
	unsigned int getRangeDamage() const;
	unsigned int getArmorDamageReduction() const;

	void setName(std::string const &name);
	void setHitPoints(unsigned int const &hit);
	void setMaxHitPoints(unsigned int const &maxHit);
	void setEnergyPoints(unsigned int const &energy);
	void setMaxEnergyPoints(unsigned int const &maxEnergy);
	void setLevel(unsigned int const &level);
	void setMeleeDamage(unsigned int const &melee);
	void setRangeDamage(unsigned int const &range);
	void setArmorDamageReduction(unsigned int const &armor);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
