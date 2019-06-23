#include "Pony.hpp"
#include <iostream>
#include <string>

Pony::Pony(std::string n, bool m, std::string s) : _name(n), _isMagical(m), _superpower(s)
{
    std::cout << _name << " is waking up." << std::endl;

    return ;
}

Pony::~Pony(void)
{
    std::cout << _name << " is dying." << std::endl;

    return ;
}

std::string Pony::getName(void)
{
    return (this->_name);
}

void        Pony::sayHello(void)
{
    std::cout << "Hello, I am " << this->_name << " and I am "
    << this->_isMagical << " Magical" << std::endl;
}

std::string Pony::getSuperpower(void)
{
    return (this->_superpower);
}

bool Pony::getIsMagical(void)
{
    return (this->_isMagical);
}


void Pony::setName(std::string str)
{
    this->_name = str;
    return ;
}

void Pony::setIsMagical(bool b)
{
    this->_isMagical = b;
    return ;
}

void Pony::setSuperpower(std::string str)
{
    this->_superpower = str;
    return ;
}
