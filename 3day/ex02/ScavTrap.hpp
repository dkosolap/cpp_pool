#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H 
# include <iostream>
# include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap {

    public:
    ScavTrap(std::string const & name);
    void    challengeNewcomer(std::string const & target);
};

#endif