#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
public:
  Enemy();
  Enemy(int hp, std::string const &type);
  Enemy(const Enemy &);
  Enemy(Enemy &);
  Enemy &operator=(Enemy &);
  Enemy &operator=(const Enemy &);
  virtual void takeDamage(int);
  virtual ~Enemy(); /* In case of deleting a specific Enemy through a Base Class Pointer */

  std::string getType(void) const;
  int getHitPoints(void) const;

protected:
  unsigned int _hitPoints;
  std::string _type;
};

std::ostream &operator<<(std::ostream &ostream, const Enemy &w);
#endif