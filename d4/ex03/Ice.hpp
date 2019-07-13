#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
  Ice(void);
  Ice(const Ice &);
  Ice &operator=(const Ice &);
  ~Ice();

  AMateria *clone() const;
  void use(ICharacter &);

private:
};

#endif