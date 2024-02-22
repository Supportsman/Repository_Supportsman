
#include <iostream>
#include <cstring>
#include <cctype>
#include <Windows.h>


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(0, "");
    std::cout << "Введите строку: ";
    char line[100];
    std::cin >> line;

    int length = strlen(line);
    bool isPalindrome = true;

    for (int i = 0; i < length / 2; i++) {
        if (tolower(line[i]) != tolower(line[length - i - 1])) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        std::cout << "Строка является палиндромом." << std::endl;
    }
    else {
        char side;
        std::cout << "Выберите сторону (l - слева, r - справа): ";
        std::cin >> side;

        int middle = length / 2;
        if (length % 2 == 0) {
            line[middle - 1] = toupper(line[middle - 1]);
            line[middle] = toupper(line[middle]);
        }
        else {
            line[middle] = toupper(line[middle]);
        }

        if (side == 'l') {
            for (int i = 0; i < length / 2; i++) {
                if (tolower(line[i]) != tolower(line[length - i - 1])) {
                    line[length - i - 1] = line[i];
                }
            }
        }
        else if (side == 'r') {
            for (int i = 0; i < length / 2; i++) {
                if (tolower(line[i]) != tolower(line[length - i - 1])) {
                    line[i] = line[length - i - 1];
                }
            }
        }
        else {
            std::cout << "Неправильный выбор стороны." << std::endl;
        }

        std::cout << "Новый палиндром: " << line << std::endl;
    }
}