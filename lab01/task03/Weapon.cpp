#include "Weapon.h"

Weapon::Weapon(const std::string& type): m_type(type)
{
    
}


const std::string& Weapon::getType() const
{
    return m_type;
}

void Weapon::setType(const std::string type)
{
    m_type = type;
}