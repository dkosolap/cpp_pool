#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP 
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {

public:
	NinjaTrap( void );
	NinjaTrap( std::string name );

	void	NinjaAtack( FragTrap const &ref );
	void	NinjaAtack( ScavTrap const &ref );
};

#endif
