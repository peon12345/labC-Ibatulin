#pragma once

#include <iostream>
#include <functional>
#include <map>

class Harl {
public:
    Harl();

    void complain(const std::string& level);

private:
    void debug();
    void info();
    void warning();
    void error();

    std::map<std::string, std::function<void()>> levelFunctions;
};
