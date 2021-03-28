
#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

# define RESET		"\x1B[0m"
# define GREEN		"\x1B[32m"
# define MAGENTA	"\x1B[35m"
# define CYAN		"\x1B[36m"

class Enemy {

private:
	Enemy();
	std::string _type;
	int _hp;

public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &enemy);
    virtual ~Enemy();

	void operator=(const Enemy &E);

	std::string const &getType() const;
	int getHP() const;

	virtual void takeDamage(int dmg);

};

#endif
