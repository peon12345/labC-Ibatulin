#include "Harl.h"

Harl::Harl() {
    levelFunctions["DEBUG"] = std::bind(&Harl::debug, this);
    levelFunctions["INFO"] = std::bind(&Harl::info, this);
    levelFunctions["WARNING"] = std::bind(&Harl::warning, this);
    levelFunctions["ERROR"] = std::bind(&Harl::error, this);
}

void Harl::complain(const std::string& level) {
    auto it = levelFunctions.find(level);
    if (it != levelFunctions.end()) {
        it->second();
    } else {
        std::cout << "Unknown level: " << level << std::endl;
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