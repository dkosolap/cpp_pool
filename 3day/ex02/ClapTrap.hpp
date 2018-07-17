#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap {

protected:
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
	ClapTrap( void );
	ClapTrap( ClapTrap const &ref );
	~ClapTrap( void);
	ClapTrap 	&operator=( ClapTrap const &ref );

	ClapTrap( std::string name );
	std::string	getName( void ) const;
	void		rangedAttack( std::string const & target );
	void		meleeAttack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
	
};

#endif
