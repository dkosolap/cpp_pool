#include "Victim.hpp"

        Victim::Victim(std::string const & name) {
            _name = name;
            std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
        }
        Victim::Victim(Victim const &src) {
            *this = Victim(src.getName());
        }
        Victim::~Victim() {
            std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
        }
		Victim      &Victim::operator=(Victim const &cp) {
            _name = cp.getName();
            return (*this);
        }
        std::string Victim::getName( void ) const{
            return _name;
        }
        void        Victim::getPolymorphed( void ) const {
            std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
        }
        std::ostream        &operator<<(std::ostream& os, const Victim& data) {
            os << "I'm " << data.getName() << " and i like otters !" << std::endl;
	        return os;
        }
