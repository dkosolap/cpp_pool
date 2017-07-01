#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H 
# include <iostream>
# include <sstream>
# include <ctime>
# include "Brain.hpp"

class Human {

public:
    std::string identify( void );
    Brain   brain;
    Brain&   getBrain();
};

#endif
