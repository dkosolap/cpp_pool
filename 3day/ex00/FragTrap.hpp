#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP 
# include <iostream>

class FragTrap {
	unsigned int			_hit;
	unsigned int			_maxHit;
	unsigned int			_maxEnergy;
	unsigned int			_energy;
	unsigned int			_level;
	unsigned int			_meelAttack;
	unsigned int			_rangedAttack;
	unsigned int			_armorReduction;
	std::string				_name;


public:
	FragTrap( void );
	FragTrap( FragTrap const &ref );
	FragTrap( std::string name );
	~FragTrap( void );

	std::string	getName( void ) const;
	void		rangedAttack( std::string const & target );
	void		meleeAttack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
	void		vaulthunter_dot_exe( std::string const & target );

	FragTrap	&operator=( FragTrap const &ref );
	
};

std::ostream	&operator<<( std::ostream &os, FragTrap const &ref );

#endif