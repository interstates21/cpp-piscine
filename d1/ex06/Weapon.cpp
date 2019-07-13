#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(std::string s) : _type(s)
{
    return;
}

Weapon::~Weapon()
{
    return;
}

std::string const &Weapon::getType(void)
{
    return (this->_type);
}

void Weapon::setType(std::string s)
{
    this->_type = s;
}