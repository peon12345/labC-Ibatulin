#pragma once
#include <iostream>

class ClapTrap
{
public:
    ClapTrap(std::string name);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
private:
    std::string m_name;
    int m_hitPoints;
    int m_energyPoints;
    int attackDamage;

};