#include <iostream>
#include <string>
#include "PowerFist.hpp"
#include "AWeapon.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
    return;
}

PowerFist::~PowerFist(void)
{
    return;
}

PowerFist::PowerFist(PowerFist &other)
{
    *this = other;
}

PowerFist::PowerFist(const PowerFist &other)
{
    *this = other;
}

PowerFist &PowerFist::operator=(PowerFist &other)
{
    this->_apcost = other._apcost;
    this->_name = other._name;
    this->_damage = other._damage;

    return *this;
}

PowerFist &PowerFist::operator=(const PowerFist &other)
{
    this->_apcost = other._apcost;
    this->_name = other._name;
    this->_damage = other._damage;

    return *this;
}

std::ostream &operator<<(std::ostream &ostream, const PowerFist &w)
{
    ostream << w.getName() << std::endl;

    return (ostream);
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
