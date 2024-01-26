#include "Harl.h"

Harl::Harl(TypeMsg filter) : m_filter(filter) {
    switch (filter)
    {
    case TypeMsg::DEBUG:
        levelFunctions[TypeMsg::DEBUG] = std::bind(&Harl::debug, this);
        break;
    
    case TypeMsg::INFO:
        levelFunctions[TypeMsg::INFO] = std::bind(&Harl::info, this);
        break;
    
    case TypeMsg::WARNING:
        levelFunctions[TypeMsg::WARNING] = std::bind(&Harl::warning, this);
        break;
    
    case TypeMsg::ERROR:
        levelFunctions[TypeMsg::ERROR] = std::bind(&Harl::error, this);
        break;
    
    default:
        levelFunctions[TypeMsg::DEBUG] = std::bind(&Harl::debug, this);
        levelFunctions[TypeMsg::INFO] = std::bind(&Harl::info, this);
        levelFunctions[TypeMsg::WARNING] = std::bind(&Harl::warning, this);
        levelFunctions[TypeMsg::ERROR] = std::bind(&Harl::error, this);
        break;
    }
    
}


void Harl::complain(TypeMsg level) {
    
    if (auto it = levelFunctions.find(level); it != levelFunctions.end()) {
        it->second();
    }
}

void Harl::debug() {
    std::cout << "Мне нравится добавлять бекон в мой бургер 7XL с двойным сыром, тройным маринадом и фирменным кетчупом. Мне действительно нравится!" << std::endl;
}

void Harl::info() {
    std::cout << "Я не могу поверить, что добавление дополнительного бекона стоит больше денег. Ты не положил достаточно бекона в мой бургер! Если бы ты положил, я бы не просил больше!" << std::endl;
}

void Harl::warning() {
    std::cout << "Я думаю, что заслуживаю получить немного бекона бесплатно. Я прихожу сюда много лет, в то время как вы начали работать здесь с прошлого месяца." << std::endl;
}

void Harl::error() {
    std::cout << "Это неприемлемо! Я хочу поговорить с менеджером сейчас." << std::endl;
}