#include <iostream>
#include <string>

class bad_length {};

int function(std::string str, int forbidden_length) {
    if (str.length() == forbidden_length) {
        throw bad_length{};
    }
    return str.length();
}

int main() {
    system("chcp 1251");
    int forbidden_length;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;

    std::string input;
    while (true) {
        std::cout << "Введите слово: ";
        std::cin >> input;

        try {
            int length = function(input, forbidden_length);
            std::cout << "Длина слова \"" << input << "\" равна " << length << std::endl;
        }
        catch (bad_length) {
            std::cout << "Вы ввели слово запретной длины! До свидания" << std::endl;
            break;
        }
    }

    return 0;
}