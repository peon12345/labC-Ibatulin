#include "Zombie.cpp"
#include <iostream>


void test(int size ,Zombie* zombies);
void clear(Zombie* zombies);

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* arr = new Zombie[N];
    for(int i = 0; i < N; ++i)
    {
        arr[i].setName(name);
    }
    return arr;
}

void test(int size ,Zombie* zombies)
{
    for(int i = 0; i < size; ++i)
    {
        zombies[i].announcement();
    }
}

void clear(Zombie* zombies)
{
    delete[] zombies;
}