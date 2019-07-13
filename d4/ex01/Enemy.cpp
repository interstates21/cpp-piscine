#include <iostream>
#include <string>
#include "Enemy.hpp"

Enemy::Enemy() : _hitPoints(50), _type("Soldier")
{
    return;
}

Enemy::Enemy(int hp, std::string const &type) : _hitPoints(hp), _type(type)
{
    return;
}

Enemy::~Enemy(void)
{
    return;
}

Enemy::Enemy(Enemy &other)
{
    *this = other;
}

Enemy::Enemy(const Enemy &other)
{
    *this = other;
}

Enemy &Enemy::operator=(Enemy &other)
{
    this->_type = other._type;
    this->_hitPoints = other._hitPoints;

    return *this;
}

Enemy &Enemy::operator=(const Enemy &other)
{
    this->_type = other._type;
    this->_hitPoints = other._hitPoints;

    return *this;
}

std::string Enemy::getType(void) const
{
    return (this->_type);
}
int Enemy::getHitPoints(void) const
{
    return (this->_hitPoints);
}

void Enemy::takeDamage(int amount)
{
    if (amount < 0)
    {
        return;
    }
    int final = this->_hitPoints - amount;

    if (final <= 0)
    {
        this->_hitPoints = 0;
        return;
    }
    this->_hitPoints = final;
}

std::ostream &operator<<(std::ostream &ostream, const Enemy &w)
{
    ostream << w.getType() << " " << w.getHitPoints() << std::endl;

    return (ostream);
}
