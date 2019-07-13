#include <iostream>
#include <string>
#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
    std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
    return;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << "  just died for no apparent reason !" << std::endl;
    return;
}

std::string Victim::getIntroduce(void) const
{
    return ("I am " + this->_name + " and I like otters !");
}

void Victim::introduce(void) const
{
    std::cout << "I am " << this->_name << " and I like otters !" << std::endl;
}

Victim &Victim::operator=(Victim &other)
{
    this->_name = other._name;

    return *this;
}

Victim &Victim::operator=(const Victim &other)
{
    this->_name = other._name;

    return *this;
}

void Victim::getPolymorphed(void) const
{
    std::cout << this->_name << "  has been turned into a cute little sheep !" << std::endl;
}

Victim::Victim(Victim &other)
{
    *this = other;
    std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim(const Victim &other)
{
    *this = other;
    std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

std::ostream &
operator<<(std::ostream &ostream, const Victim &v)
{
    ostream << v.getIntroduce() << std::endl;

    return (ostream);
}