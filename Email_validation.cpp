// Wczytaj od uzytkownika lancuch znakow, a nastepnie sprawdz czy jest to poprawny adres e-mail.

#include <iostream>
#include <regex>

bool checkEmail(const std::string& email)
{
    std::regex emailRegex("[a-z0-9_.]{3,}@[a-z0-9_]+.[a-z]{2,3}");
    return std::regex_match(email, emailRegex);
}

int main()
{
    std::string email;
    std::cout << "Please enter your e-mail address: " << std::endl;
    std::cin >> email;

    std::cout << email << " result: " << checkEmail(email) << std::endl;

}


