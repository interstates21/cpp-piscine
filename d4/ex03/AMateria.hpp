#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
protected:
  unsigned int _xp;
  std::string _type;

public:
  AMateria(std::string const &);
  AMateria(const AMateria &);
  AMateria &operator=(const AMateria &);
  virtual ~AMateria();

  std::string const &getType() const; //Returns the materia type
  unsigned int getXP() const;         //Returns the Materia's XP
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);
};

#endif // ! AMATERIA_HPP