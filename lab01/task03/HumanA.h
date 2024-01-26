#pragma once 
#include "Weapon.h"
#include <string>

class HumanA
{
public:
    HumanA(const std::string& name, const Weapon& weapon);
    void attack() const;
private:
    std::string m_name;
    Weapon m_weapon;
};