#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; ++i)
        _inventory[i] = nullptr;
}

Character::Character(const std::string &name) : _name(name)
{
    for (int i = 0; i < 4; ++i)
        _inventory[i] = nullptr;
}

Character::Character(const Character &a)
{
    *this = a;
}

Character::~Character() {}

Character &Character::operator=(const Character &a)
{
    this->_name = a._name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = a._inventory[i];
    return *this;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
        if (!_inventory[i])
        {
            _inventory[i] = m;
            return;
        }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;

    _inventory[idx] = 0;
}

std::string const &Character::getName() const
{
    return _name;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3)
        return;

    if (!_inventory[idx])
        return;

    _inventory[idx]->use(target);
    _inventory[idx] = 0;
}
