#include <iostream>
#include <string>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << name << ", " << title << ", is born !" << std::endl;
    return;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
    return;
}

std::string Sorcerer::getIntroduce(void) const
{
    return ("I am " + this->_name + ", " + this->_title + ", and I like ponies !");
}

void Sorcerer::introduce(void) const
{
    std::cout << "I am " << this->_name << ", " << this->_title << ", and I like ponies !" << std::endl;
}

void Sorcerer::polymorph(Victim const &v)
{
    v.getPolymorphed();
}

Sorcerer &Sorcerer::operator=(Sorcerer &other)
{
    this->_name = other._name;
    this->_title = other._title;

    return *this;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &other)
{
    this->_name = other._name;
    this->_title = other._title;

    return *this;
}

std::ostream &operator<<(std::ostream &ostream, const Sorcerer &s)
{
    ostream << s.getIntroduce() << std::endl;

    return (ostream);
}

Sorcerer::Sorcerer(Sorcerer &other)
{
    *this = other;
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other)
{
    *this = other;
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}