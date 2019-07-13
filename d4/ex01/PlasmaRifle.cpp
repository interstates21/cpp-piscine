#include <iostream>
#include <string>
#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
    return;
}

PlasmaRifle::~PlasmaRifle(void)
{
    return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle &other)
{
    *this = other;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &other)
{
    *this = other;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle &other)
{
    this->_apcost = other._apcost;
    this->_name = other._name;
    this->_damage = other._damage;

    return *this;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &other)
{
    this->_apcost = other._apcost;
    this->_name = other._name;
    this->_damage = other._damage;

    return *this;
}

std::ostream &operator<<(std::ostream &ostream, const PlasmaRifle &w)
{
    ostream << w.getName() << std::endl;

    return (ostream);
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
