#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _xp(0), _type(type)
{
}

AMateria::AMateria(const AMateria &a)
{
    *this = a;
}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &a)
{
    this->_xp = a._xp;
    this->_type = a._type;
    return (*this);
}

#include "AMateria.hpp"

std::string const &AMateria::getType() const
{
    return this->_type;
}

unsigned int AMateria::getXP() const
{
    return this->_xp;
}

void AMateria::use(ICharacter &target)
{
    (void)target;

    _xp += 10;
}
