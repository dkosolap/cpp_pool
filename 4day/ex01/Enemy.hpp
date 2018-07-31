#ifndef ENEMY_HPP
# define ENEMY_HPP 
# include <iostream>

class Enemy {

protected:
	int			_hp;
	std::string	_type;
	Enemy();
public:
	Enemy( Enemy const &ref );
	virtual ~Enemy();
	Enemy 	&operator=( Enemy const &ref );

	Enemy(int hp, std::string const &type);
	std::string const getType() const;
	int getHP() const;

	virtual void takeDamage(int damage);
};

#endif
