#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP 
# include "ClapTrap.hpp"

class FragTrap :  virtual public ClapTrap {

public:
	FragTrap( void );
	FragTrap( std::string name );

	void		vaulthunter_dot_exe( std::string const & target );

	
};

#endif