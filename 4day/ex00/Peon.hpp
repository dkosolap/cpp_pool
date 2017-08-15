#ifndef PEON_CLASS_H
# define PEON_CLASS_H 
# include "Victim.hpp"

class   Peon : public Victim{

    public:
        Peon(std::string const & name);
        Peon(Peon const &src);
        ~Peon();

		Peon                &operator=(Peon const &rhs);
        void                getPolymorphed( void ) const;
};

#endif
