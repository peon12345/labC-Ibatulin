#include "FragTrap.h"
#include <iostream>

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name) {
    m_hitPoints = 100;
    m_energyPoints = 100;
    m_attackDamage = 30;
    std::cout << "FragTrap constructor called. Name: " << m_name << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called. Name: " << m_name << std::endl;
}


void FragTrap::highFivesGuys() {
    std::cout << " дай пять" << std::endl;
}