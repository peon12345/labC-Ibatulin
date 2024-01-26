#include <iostream>
#include "ScavTrap.h"

int main()
{
    ScavTrap scav("Space");
    scav.attack("enemy space");
    scav.takeDamage(2);
    scav.beRepaired(3);
    scav.guardGate();
    return 0;
}