#pragma once

#include <iostream>
#include <functional>
#include <map>

enum class TypeMsg
{
    NONE = 0,
    DEBUG,
    INFO,
    ERROR,
    WARNING
};

class Harl {
public:
    Harl(TypeMsg filter = TypeMsg::NONE);

    void complain(TypeMsg level);

private:
    void debug();
    void info();
    void warning();
    void error();

    TypeMsg m_filter;

    std::map<TypeMsg, std::function<void()>> levelFunctions;
};
