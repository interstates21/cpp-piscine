#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    Character();

    std::string _name;
    AMateria *_inventory[4];

  public:
    Character(const std::string &);
    ~Character();

    Character(const Character &);
    Character &operator=(const Character &);

    std::string const &getName() const;
    void equip(AMateria *);
    void unequip(int);
    void use(int, ICharacter &);
};

#endif
