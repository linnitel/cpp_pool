
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

# define RANDOM_ENERGY_COST 25

# define RESET		"\x1B[0m"
# define GREEN		"\x1B[32m"
# define MAGENTA	"\x1B[35m"
# define CYAN		"\x1B[36m"

class FragTrap {

private:
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
	FragTrap();
    FragTrap(std::string const &name);
    FragTrap(FragTrap &trap);
    ~FragTrap();

    void operator=(const FragTrap &F);

    std::string getName() const;
    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
	unsigned int getMaxHitPoints() const;
	unsigned int getMaxEnergyPoints() const;
    unsigned int getLevel() const;
    unsigned int getMeleeDamage() const;
    unsigned int getRangeDamage() const;
    unsigned int getArmorDamageReduction() const;

    void setName(std::string const &name);
    void setHitPoints(unsigned int const &hit);
    void setEnergyPoints(unsigned int const &energy);
	void setMaxHitPoints(unsigned int const &maxHit);
	void setMaxEnergyPoints(unsigned int const &energy);
    void setLevel(unsigned int const &level);
    void setMeleeDamage(unsigned int const &melee);
    void setRangeDamage(unsigned int const &range);
    void setArmorDamageReduction(unsigned int const &armor);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    unsigned int vaulthunter_dot_exe(std::string const & target);
};

#endif
