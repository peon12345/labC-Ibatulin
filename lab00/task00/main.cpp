#include <iostream>

int main(int argc, char** argv)
{
    if(argc < 1){
        std::cout << "Не указана строка";
        return 1;
    }
        
    
    std::string text = argv[1];

    for (int i = 0; i < text.length(); i++) {
        text[i] = std::toupper(text[i]);
    }

    std::cout << text << std::endl;

    return 0;
}