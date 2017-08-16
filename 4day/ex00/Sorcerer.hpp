#ifndef SORCERER_CLASS_H
# define SORCERER_CLASS_H 
# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer {
        std::string         _name;
        std::string         _title;
    public:
        Sorcerer(std::string const & name, std::string const & title);
        ~Sorcerer();
        Sorcerer(Sorcerer const & cp);
        Sorcerer            &operator=(Sorcerer const & cp);
        void                polymorph(Victim const & dt) const;
        void                polymorph(Peon const & dt) const;
        std::string         getName( void ) const;
        std::string         getTitle( void ) const;
};

std::ostream                &operator<<(std::ostream& os, const Sorcerer& data);
//     os << data.getInfo(); return os;

#endif
