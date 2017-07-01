#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H 
# include <iostream>
# include <sstream>
# include <ctime>

class Brain {

public:
    Brain();
    std::string identify( void );
private:
    int _iq;
};

#endif
