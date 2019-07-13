#include "Peon.hpp"
#include "Victim.hpp"
#include <iostream>

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
    return;
}

Peon::~Peon(void)
{
    std::cout << "“Bleuark.." << std::endl;
}

Peon &Peon::operator=(Peon &other)
{
    this->_name = other._name;

    return *this;
}

Peon &Peon::operator=(const Peon &other)
{
    this->_name = other._name;

    return *this;
}

void Peon::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a pink pony !"
              << std::endl;
    return;
}

std::ostream &
operator<<(std::ostream &ostream, const Peon &v)
{
    ostream << v.getIntroduce();

    return (ostream);
}