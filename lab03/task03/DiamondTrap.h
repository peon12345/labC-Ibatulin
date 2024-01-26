#pragma once
#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public FragTrap , public ScavTrap{
public:
    DiamondTrap(const std::string& name);
    void whoAmI() const;
    ~DiamondTrap();
private:
    std::string m_name;
};