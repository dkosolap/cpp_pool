#ifndef AWEAPON_HPP
# define AWEAPON_HPP 
# include <iostream>

class AWeapon {

protected:
	std::string _name;
	int			_apcost;
	int 		_damage;
public:
	AWeapon();
	AWeapon( AWeapon const &ref);
	virtual ~AWeapon();
	AWeapon 	&operator=( AWeapon const &ref);

	AWeapon(std::string const & name, int apcost, int damage);
	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
