#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>

class SuperTrap : public FragTrap, public NinjaTrap
{
  public:
    SuperTrap(void);
    SuperTrap(std::string);
    SuperTrap(const SuperTrap &);
    ~SuperTrap();

    SuperTrap &operator=(const SuperTrap &);
    SuperTrap &operator=(SuperTrap &);

    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
};

#endif
