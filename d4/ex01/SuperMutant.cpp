#include <iostream>
#include <string>
#include "SuperMutant.hpp"
#include "Enemy.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh .." << std::endl;
    return;
}

SuperMutant::SuperMutant(SuperMutant &other)
{
    *this = other;
}

SuperMutant::SuperMutant(const SuperMutant &other)
{
    *this = other;
}

SuperMutant &SuperMutant::operator=(SuperMutant &other)
{
    this->_type = other._type;
    this->_hitPoints = other._hitPoints;

    return *this;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &other)
{
    this->_type = other._type;
    this->_hitPoints = other._hitPoints;

    return *this;
}

std::ostream &operator<<(std::ostream &ostream, const SuperMutant &w)
{
    ostream << w.getType() << std::endl;

    return (ostream);
}

void SuperMutant::takeDamage(int amount)
{
    amount -= 3;
    if (amount < 0)
    {
        return;
    }
    int final = this->_hitPoints - amount;

    if (final <= 0)
    {
        this->_hitPoints = 0;
        return;
    }
    this->_hitPoints = final;
}
