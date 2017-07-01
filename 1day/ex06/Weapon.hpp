#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H 
# include <iostream>

class Weapon {

public:
    const std::string&  getType( void );
    void                setType( std::string );
                        Weapon (std::string);
                        Weapon ( void );
private:
    std::string _type;
};

#endif
