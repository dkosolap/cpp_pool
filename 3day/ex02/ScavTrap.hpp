#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H 
# include "ClapTrap.hpp"

class   ScavTrap : ClapTrap {
    public:
        ScavTrap(std::string const & name);
        ~ScavTrap();
        void    challengeNewcomer(std::string const & target);
};

#endif
