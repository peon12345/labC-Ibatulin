#include <iostream>
#include "ClapTrap.h"

int main()
{
    ClapTrap clap("Space");
    clap.attack("enemy space");
    clap.takeDamage(2);
    clap.beRepaired(3);
    return 0;
}