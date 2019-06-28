#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>

class Sorcerer
{
  public:
    Sorcerer(void);
    Sorcerer(std::string, std::string);
    Sorcerer(Sorcerer &);
    Sorcerer(const Sorcerer &);
    Sorcerer &operator=(Sorcerer &);
    Sorcerer &operator=(const Sorcerer &);
    ~Sorcerer();

  private:
    std::string _name;
    std::string _title;
};

#endif