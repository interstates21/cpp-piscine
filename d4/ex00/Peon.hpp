#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
  public:
    Peon(std::string);
    Peon(Peon &);
    Peon(const Peon &);
    Peon &operator=(Peon &);
    Peon &operator=(const Peon &);
    ~Peon();

    void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &os, Peon const &p);

#endif // !PEOP_HPP