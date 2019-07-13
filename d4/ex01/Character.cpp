#include <iostream>
#include <string>
#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"

Character::Character() : _name("Hero"), _weapon(nullptr),_actionPoints(40)
{
    return;
}

Character::Character(std::string const &name) : _name(name), _weapon(nullptr), _actionPoints(40)
{
    return;
}

Character::~Character(void)
{
    return;
}

Character::Character(Character &other)
{
    *this = other;
}

Character::Character(const Character &other)
{
    *this = other;
}

Character &Character::operator=(Character &other)
{
    this->_name = other._name;
    this->_actionPoints = other._actionPoints;

    return *this;
}

Character &Character::operator=(const Character &other)
{
    this->_name = other._name;
    this->_actionPoints = other._actionPoints;

    return *this;
}

std::string Character::getName(void) const
{
    return (this->_name);
}

AWeapon *Character::getWeapon(void) const
{
    return (this->_weapon);
}

unsigned int Character::getAP(void) const
{
    return (this->_actionPoints);
}

void Character::recoverAP()
{
    int final = this->_actionPoints + 10;

    if (final >= 40)
    {
        this->_actionPoints = 40;
        return;
    }
    this->_actionPoints = final;
}

void Character::equip(AWeapon *w)
{
    this->_weapon = w;
}

void Character::attack(Enemy *e)
{
    if (!this->_weapon)
        return;
    int final = this->_actionPoints - this->_weapon->getAPCost();
    if (final < 0)
        return;
    this->_actionPoints = final;
    std::cout << this->_name << " attacks " << e->getType() << " with a " << this->_weapon->getName() << std::endl;
    e->takeDamage(this->_weapon->getDamage());
    this->_weapon->attack();
    if (e->getHitPoints() <= 0)
        delete e;
}

std::ostream &operator<<(std::ostream &ostream, const Character &w)
{
    if(w.getWeapon())
        ostream << w.getName() << " has " << w.getAP() << "and wields a " << w.getWeapon()->getName() << std::endl;
    else
       ostream << w.getName() << " has " << w.getAP() << "and is unarmed" << std::endl;

    return (ostream);
}
