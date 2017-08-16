#include "Peon.hpp"

        Peon::Peon(std::string const & name) : Victim(name) {
            std::cout << "Zog zog." << std::endl;
        }
        Peon::Peon(Peon const &src) : Victim(src) {
            *this = Peon(src.getName()); 
        }
        Peon::~Peon() {
            std::cout << "Bleuark..." << std::endl;
        }

		Peon                &Peon::operator=(Peon const &cp) {
            Victim::operator=(cp);
            return *this;
        }
        void                Peon::getPolymorphed( void ) const {
            std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
        }
