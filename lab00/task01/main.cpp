#include <iostream>
#include <array>
#include <utility>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>


struct Contact
{
    std::string name;
    std::string surname;
    std::string nickname;
    int number = 0;
    std::string secret;
};

class PhoneBook
{
public:
    void append(const Contact& contact)
    {
        if(m_currentIndex >= MAX_SIZE)
            m_currentIndex = 0;

        m_contacts[m_currentIndex] = contact;
        ++m_currentIndex;
    }

    const std::vector<std::pair<int,Contact>> search(const std::string& name) const
    {
        std::vector<std::pair<int,Contact>> result;

        for(auto it = m_contacts.begin();it != m_contacts.end(); ++it)
        {
            if(it->name == name)
            {
                result.push_back(std::make_pair(std::distance(m_contacts.begin(),it),*it));
            }
        }

        return result;
    }
private:
    static constexpr int MAX_SIZE = 8;
    int m_currentIndex = 0;
    std::array<Contact,MAX_SIZE> m_contacts;
};


void showCommands()
{
    std::cout << "Введите команду:" << std::endl 
    << "ADD - сохранить новый контакт" << std::endl
    << "SEARCH - отображение определенного контакта" << std::endl
    << "EXIT - выход" << std::endl;
}

bool appendContact(PhoneBook& book)
{
    Contact contact;
    std::cout << "Введите имя:";
    std::cin >> contact.name;
    if(contact.name.empty()){
        std::cout << " поле Имя не может быть пустым.";
        return false;
    }

    std::cout << "Введите фамилию:";
    std::cin >> contact.surname;
    if(contact.surname.empty()){
        std::cout << "поле Фамилия не может быть пустой.";
        return false;
    }

    std::cout << "Введите псевдоним:";
    std::cin >> contact.nickname;
    if(contact.nickname.empty()){
        std::cout << "поле Псевдоним не может быть пустой.";
        return false;
    }

    std::cout << "Введите номер телефона:";
    std::cin >> contact.number;

    if (std::cin.fail()) {
        std::cout << "Номер телефона должен содержать только цифры.";
        std::cin.clear();
        return false;
    }

    std::cout << "Введите его самый страшный секрет:";
    std::cin >> contact.secret;
    if(contact.secret.empty()){
        std::cout << " поле Секрет не может быть пустым.";
        return false;
    }

    book.append(contact);

    return true;
}

std::string truncString(const std::string& str, int width)
{
    if (str.length() > width)
        return str.substr(0, width - 1) + ".";
    else
        return str;
}

void showContacts(const std::vector<std::pair<int,Contact>>& contacts)
{
    static constexpr int WIDTH = 10;

    std::cout << std::right << std::setw(10) << "Index" << " | "
                   << std::setw(WIDTH) << "Name" << " | "
                   << std::setw(WIDTH) << "Number" << " | "
                   << std::setw(WIDTH) << "Surname" << " | "
                   << std::setw(WIDTH) << "Nickname" << " | " 
                   << std::setw(WIDTH) << "Secret" << " | "<< std::endl;

    

    
    for(const auto&[index,contact] : contacts)
    {
        std::string indexStr =  truncString(std::to_string(index), WIDTH);
        std::string name = truncString(contact.name, WIDTH);
        std::string surname = truncString(contact.surname, WIDTH);
        std::string nickname = truncString(contact.nickname, WIDTH);
        std::string phoneNum = truncString(std::to_string(contact.number), WIDTH);
        std::string secret = truncString(contact.secret, WIDTH);

        std::cout << std::right << std::setw(10) << indexStr<< " | "
                   << std::setw(WIDTH) << name << " | "
                   << std::setw(WIDTH) << surname << " | "
                   << std::setw(WIDTH) << phoneNum << " | "
                   << std::setw(WIDTH) << nickname<< " | " 
                   << std::setw(WIDTH) << secret << " | " << std::endl;
    }
}

int main()
{
   PhoneBook book;

    std::string command = "";
    while(command != "EXIT"){

        if(command == "ADD"){
            if(appendContact(book))
                std::cout << "Контакт добавлен!" << std::endl;
            
            std::cout << std::endl;
            std::cout << std::endl;
        }else if(command == "SEARCH"){
            std::cout << "Введите имя" << std::endl;
            std::string name;
            std::cin >> name;

            auto contacts = book.search(name);
            showContacts(contacts);

            std::cout << std::endl;
            std::cout << std::endl;
        }
        
        showCommands();
        std::cin >> command;
        std::transform(command.begin(), command.end(), command.begin(), [](unsigned char c){ return std::toupper(c);});
    }
}