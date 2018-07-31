#ifndef POWERFIRST_HPP
# define POWERFIRST_HPP 
# include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
	PowerFist();
	void attack() const;
};

#endif