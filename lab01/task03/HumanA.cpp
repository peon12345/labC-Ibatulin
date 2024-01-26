#include <iostream>
#include "HumanA.h"

HumanA::HumanA(const std::string& name, const Weapon& weapon) : m_name(name), m_weapon(weapon)
{
    attack();
}

void HumanA::attack() const
{
   std::cout << m_name << "attacks with their " << m_weapon.getType() << std::endl; 
}
