#include <iostream>
#include "HumanB.h"

HumanB::HumanB(const std::string& name) : m_name(name)
{
    
}

void HumanB::attack() const
{
   if(m_weapon.has_value()){
       std::cout << m_name << "attacks with their " << m_weapon->getType() << std::endl; 
   }
}

void HumanB::setWeapon(const Weapon& weapon)
{
    m_weapon = weapon;
}
