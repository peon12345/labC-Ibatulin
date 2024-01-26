#pragma once
#include <iostream>

class ClapTrap
{
public:
    ClapTrap(std::string name);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
protected:
    std::string m_name;
    int m_hitPoints;
    int m_energyPoints;
    int m_attackDamage;
};