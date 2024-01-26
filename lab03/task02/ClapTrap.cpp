#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name) : m_name(name),
                                       m_hitPoints(10),
                                       m_energyPoints(10),
                                       m_attackDamage(0)
{
    std::cout << "ClapTrap created" << std::endl;
}

ClapTrap::~ClapTrap()
{
   std::cout << "ClapTrap destroed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (m_energyPoints > 0)
    {
        std::cout << m_name << " атакует " << target << ", нанося 1 в очках урона" << std::endl;
        m_energyPoints -= 1;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (m_energyPoints > 0)
    {
        std::cout << m_name << " восстановил " << amount << " очков жизни." << std::endl;
        m_hitPoints += amount;
        m_energyPoints -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    m_hitPoints -= amount;
    if(m_hitPoints < 0)
        m_hitPoints = 0;
}