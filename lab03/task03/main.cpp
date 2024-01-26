#include <iostream>
#include "DiamondTrap.h"

int main() {
    DiamondTrap diamondTrap("Diamond");

    diamondTrap.attack("Bandit");
    diamondTrap.takeDamage(10);
    diamondTrap.beRepaired(5);
    diamondTrap.highFivesGuys();
    diamondTrap.whoAmI();

    return 0;
}