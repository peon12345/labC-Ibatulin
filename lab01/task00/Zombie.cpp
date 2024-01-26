#include "Zombie.h"
#include <iostream>

Zombie::Zombie(const std::string& name) : m_name(name)
{
    
}

Zombie::~Zombie()
{
    std::cout << "Zombie deleted" << std::endl;
}

void Zombie::announcement()
{
    std::cout << " "+m_name+" BraiiiiiiinnnzzzZ.." << std::endl;
}
