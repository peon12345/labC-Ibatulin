#pragma once 
#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap(const std::string& name);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};