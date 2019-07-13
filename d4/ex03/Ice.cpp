#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    return;
}

Ice::Ice(const Ice &a) : AMateria(a)
{
}

Ice::~Ice()
{
    return;
}

Ice &Ice::operator=(const Ice &a)
{
    this->_xp = a._xp;
    this->_type = a._type;
    return (*this);
}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
