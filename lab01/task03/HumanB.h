#pragma once 
#include "Weapon.h"
#include <optional>

class HumanB
{
public:
    HumanB(const std::string& name);
    void attack() const;
    void setWeapon(const Weapon& weapon);
private:
    std::string m_name;
    std::optional<Weapon> m_weapon;
};