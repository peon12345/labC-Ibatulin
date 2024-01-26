#include "Zombie.cpp"

Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}