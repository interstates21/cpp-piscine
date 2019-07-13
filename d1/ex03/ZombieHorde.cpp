#include "Zombie.hpp"
#include <iostream> 
#include <string>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _size(n)
{
    std::cout << "Zombies are comming!" << std::endl;
    _zombies = new Zombie[n];
}

ZombieHorde::~ZombieHorde()
{
    delete[] _zombies;
    std::cout << "Zombies are dying!" << std::endl;
}

void ZombieHorde::announce(void)
{
    for (int i = 0; i < this->_size; i++)
        _zombies[i].announce();
}
