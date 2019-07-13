#include <iostream>
#include <string>
#include "AWeapon.hpp"

AWeapon::AWeapon() : _name("Simple Gun"), _apcost(2), _damage(10)
{
    return;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
    return;
}

AWeapon::~AWeapon(void)
{
    return;
}

AWeapon::AWeapon(AWeapon &other)
{
    *this = other;
}

AWeapon::AWeapon(const AWeapon &other)
{
    *this = other;
}

AWeapon &AWeapon::operator=(AWeapon &other)
{
    this->_apcost = other._apcost;
    this->_name = other._name;
    this->_damage = other._damage;

    return *this;
}

AWeapon &AWeapon::operator=(const AWeapon &other)
{
    this->_apcost = other._apcost;
    this->_name = other._name;
    this->_damage = other._damage;

    return *this;
}

std::ostream &operator<<(std::ostream &ostream, const AWeapon &w)
{
    ostream << w.getName() << std::endl;

    return (ostream);
}

std::string AWeapon::getName(void) const
{
    return (this->_name);
}
int AWeapon::getDamage(void) const
{
    return (this->_damage);
}
int AWeapon::getAPCost(void) const
{
    return (this->_apcost);
}