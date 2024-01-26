#pragma once 
#include <string>

class Zombie
{
public:
    Zombie(const std::string& name);
    ~Zombie();
    void announcement();
private:
    std::string m_name;
};