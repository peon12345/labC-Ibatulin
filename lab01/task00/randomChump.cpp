#include "newZombie.cpp"

void randomChump(std::string name)
{
    Zombie* zombie = newZombie(name);
    zombie->announcement();
    delete zombie;
}