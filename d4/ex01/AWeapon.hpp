#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
public:
  AWeapon();
  AWeapon(std::string const &name, int apcost, int damage);
  AWeapon(const AWeapon &);
  AWeapon(AWeapon &);
  AWeapon &operator=(AWeapon &);
  AWeapon &operator=(const AWeapon &);
  virtual void attack() const = 0;
  virtual ~AWeapon(); /* In case of deleting a specific W through a Base Class Pointer */

  std::string getName(void) const;
  int getAPCost(void) const;
  int getDamage(void) const;

protected:
  std::string _name;
  int _apcost;
  int _damage;
};

std::ostream &operator<<(std::ostream &ostream, const AWeapon &w);
#endif