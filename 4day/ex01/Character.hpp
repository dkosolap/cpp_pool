#ifndef CHARACTER_HPP
# define CHARACTER_HPP 
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	std::string	_name;
	int			_ap;
	AWeapon		*_wep;
	Character();
public:
	Character( Character const &ref );
	~Character();
	Character 			&operator=( Character const &ref );

	Character(std::string const & name);
	void				recoverAP();
	void				equip(AWeapon *wep);
	void				attack(Enemy *en);
	std::string const	getName() const;
	int					getAP() const;
	AWeapon	const		*getWeapon(void) const;
};

std::ostream			&operator<<(std::ostream &os, Character const &ref);

#endif
