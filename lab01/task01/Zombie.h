#pragma once 
#include <string>
class Zombie
{
public:
    Zombie() = default;
    Zombie(const std::string& name);
    void setName(const std::string& name);
    ~Zombie();
    void announcement();
private:
    std::string m_name;
};