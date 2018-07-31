#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP 

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap {
public:
	SuperTrap( void );
	SuperTrap( std::string name );

	// void	NinjaAtack( FragTrap const &ref );
	// void	NinjaAtack( ScavTrap const &ref );
	
};

#endif