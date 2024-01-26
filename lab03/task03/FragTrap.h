#pragma once 

#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap {
public:
    FragTrap(const std::string& name);
    ~FragTrap();

    void highFivesGuys();
};