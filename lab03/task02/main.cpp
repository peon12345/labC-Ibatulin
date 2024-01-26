#include <iostream>
#include "FragTrap.h"

int main() {
    FragTrap fragTrap("FR4G-TP");

    fragTrap.attack("Bandit");
    fragTrap.takeDamage(10);
    fragTrap.beRepaired(5);
    fragTrap.highFivesGuys();

    return 0;
}