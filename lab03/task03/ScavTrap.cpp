#include "ScavTrap.h"
#include <iostream>

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name) 
{
    m_hitPoints = 100;
    m_energyPoints = 50;
    m_attackDamage = 20;
    std::cout << "ScavTrap constructor called. Name: " << m_name << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called. Name: " << m_name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (m_energyPoints > 0)
    {
        std::cout << m_name << " атакует " << target << ", нанося 1 в очках урона" << std::endl;
        m_energyPoints -= 1;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap теперь находится в режиме хранителя ворот." << std::endl;
}