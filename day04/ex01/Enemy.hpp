
#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy {

private:
	Enemy();
	std::string _type;
	int _hp;

public:
	Enemy(int hp, std::string const & type);
    virtual ~Enemy();

	void operator=(const Enemy &E);

	std::string const &getType() const;
	int getHP() const;

	virtual void takeDamage(int dmg);

};

#endif
