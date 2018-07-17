#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP 
# include <iostream>

class FragTrap {

public:
	FragTrap( void );
	FragTrap( FragTrap const &ref );
	FragTrap( std::string name );
	~FragTrap( void );
	FragTrap	&operator=( FragTrap const &ref );


	void		vaulthunter_dot_exe( std::string const & target );

	
};

#endif