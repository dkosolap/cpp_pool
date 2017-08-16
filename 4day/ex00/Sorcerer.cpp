#include "Sorcerer.hpp"

    Sorcerer::Sorcerer(std::string const & name, std::string const & title) {
        _name = name;
        _title = title;
        std::cout << _name << "," << _title << "is born!" << std::endl; 
    }

    Sorcerer::~Sorcerer() {
        std::cout << _name << "," << _title << " is dead. Consequences will never be the same !" << std::endl;
    }


    Sorcerer::Sorcerer(Sorcerer const & cp) {
        *this = Sorcerer(cp.getName(), cp.getTitle());
    }

    Sorcerer            &Sorcerer::operator=(Sorcerer const &cp) {
        this->_name = cp.getName();
        this->_title = cp.getTitle();
        return (*this);
    }
    void                Sorcerer::polymorph(Victim const & dt) const {
        dt.getPolymorphed();
    }
    void                Sorcerer::polymorph(Peon const & dt) const {
        dt.getPolymorphed();
    }
    std::string         Sorcerer::getName( void ) const{
        return _name;
    }

    std::string         Sorcerer::getTitle( void ) const{
        return _title;
    }

    std::ostream                &operator<<(std::ostream& os, const Sorcerer& data) {
        os << "I'm " << data.getName() << ", " << data.getTitle() << ", and I like ponies !" << std::endl;
        return os;
    }
