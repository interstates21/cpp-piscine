#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    return;
}

Cure::Cure(const Cure &a) : AMateria(a)
{
}

Cure::~Cure() {
    return ;
}

Cure &Cure::operator=(const Cure &a)
{
    this->_xp = a._xp;
    this->_type = a._type;
    return (*this);
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "s wounds *" << std::endl;
}
