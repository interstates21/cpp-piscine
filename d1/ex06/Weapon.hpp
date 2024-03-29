#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string _type;

public:
    Weapon(std::string);
    ~Weapon();

    std::string const &getType(void);
    void setType(std::string);
};

#endif