#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),FragTrap(name), ScavTrap(name)
{
    m_hitPoints = FragTrap::m_hitPoints;
    m_energyPoints = ScavTrap::m_energyPoints;
    m_attackDamage = FragTrap::m_attackDamage;
    std::cout << "DiamondTrap constructor called. Name: " << m_name << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called. Name: " << m_name << std::endl;
}

void DiamondTrap::whoAmI() const {
    std::cout << "I am DiamondTrap " << m_name << ", and my ClapTrap name is " << ClapTrap::m_name << std::endl;
}