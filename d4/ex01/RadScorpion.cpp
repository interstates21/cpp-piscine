#include <iostream>
#include <string>
#include "RadScorpion.hpp"
#include "Enemy.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *”" << std::endl;
    return;
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *" << std::endl;
    return;
}

RadScorpion::RadScorpion(RadScorpion &other)
{
    *this = other;
}

RadScorpion::RadScorpion(const RadScorpion &other)
{
    *this = other;
}

RadScorpion &RadScorpion::operator=(RadScorpion &other)
{
    this->_type = other._type;
    this->_hitPoints = other._hitPoints;

    return *this;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &other)
{
    this->_type = other._type;
    this->_hitPoints = other._hitPoints;

    return *this;
}

std::ostream &operator<<(std::ostream &ostream, const RadScorpion &w)
{
    ostream << w.getType() << std::endl;

    return (ostream);
}
