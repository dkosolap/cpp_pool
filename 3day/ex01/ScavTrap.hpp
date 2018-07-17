#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP 
# include <iostream>

class ScavTrap {

	unsigned int			_hit;
	unsigned int			_maxHit;
	unsigned int			_maxEnergy;
	unsigned int			_energy;
	unsigned int			_level;
	unsigned int			_melleAttack;
	unsigned int			_rangedAttack;
	unsigned int			_armorReduction;
	std::string				_name;

public:
	ScavTrap( void );
	ScavTrap( ScavTrap const &ref);
	ScavTrap( std::string name );
	~ScavTrap( void );
	ScavTrap 	&operator=( ScavTrap const &ref);

	std::string	getName( void ) const;
	void		rangedAttack( std::string const & target );
	void		meleeAttack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
	void		challengeNewcomer( std::string const & target );
};

#endif