#include "zombieHorde.cpp"

int main()
{
    const int N = 10;
    Zombie* arr = zombieHorde(N,"Vasya");
    test(N,arr);
    clear(arr);
    return 0;
}