#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
public:
  Victim(std::string);
  Victim(Victim &);
  Victim(const Victim &);
  Victim &operator=(Victim &);
  Victim &operator=(const Victim &);
  std::string getIntroduce(void) const;
  void introduce(void) const;
  virtual void getPolymorphed(void) const;
  ~Victim();

protected:
  std::string _name;
};

std::ostream &operator<<(std::ostream &ostream, const Victim &v);
#endif