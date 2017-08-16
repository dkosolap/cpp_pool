#ifndef VICTIM_CLASS_H
# define VICTIM_CLASS_H 
# include <iostream>

class   Victim {
    protected:
        std::string _name;
    public:
        Victim(std::string const & name);
        Victim(Victim const &src);
        ~Victim();
		Victim      &operator=(Victim const &cp);
        std::string getName( void ) const;
        void        getPolymorphed( void ) const;      
};

std::ostream        &operator<<(std::ostream& os, const Victim& data);

#endif
