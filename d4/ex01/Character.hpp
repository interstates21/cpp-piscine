#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
  public:
    Character();
    Character(std::string const &name);
    Character(const Character &);
    Character(Character &);
    Character &operator=(Character &);
    Character &operator=(const Character &);
    void recoverAP();
    void equip(AWeapon *);
    void attack(Enemy *);
    ~Character();

    std::string getName(void) const;
    AWeapon *getWeapon(void) const;
    unsigned int getAP(void) const;

  protected:
    std::string _name;
    AWeapon *_weapon;
    unsigned int _actionPoints;
};

std::ostream &operator<<(std::ostream &ostream, const Character &w);
#endif