#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP 
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
	PlasmaRifle();
	void attack() const;
};

#endif