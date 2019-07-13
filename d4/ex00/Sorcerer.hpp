#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
public:
  Sorcerer(void);
  Sorcerer(std::string, std::string);
  Sorcerer(Sorcerer &);
  Sorcerer(const Sorcerer &);
  Sorcerer &operator=(Sorcerer &);
  Sorcerer &operator=(const Sorcerer &);
  std::string getIntroduce(void) const;
  void introduce(void) const;
  void polymorph(Victim const &);
  ~Sorcerer();

private:
  std::string _name;
  std::string _title;
};

std::ostream &operator<<(std::ostream &ostream, const Sorcerer &s);
#endif