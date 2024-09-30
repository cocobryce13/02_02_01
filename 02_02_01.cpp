#include <iostream>
#include <string>
#include <windows.h>

struct person
{
    int account_number;
    std::string name;
    double balance;
};

void increment_balance(person* p, double new_balance)
{
    p->balance = new_balance;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    person* ptr = new person;

    std::cout << "Введите номер счёта: ";
    std::cin >> ptr->account_number;

    std::cout << "Введите имя: ";
    std::cin >> ptr->name;

    std::cout << "Введите баланс: ";
    std::cin >> ptr->balance;

    double new_balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> new_balance;

    increment_balance(ptr, new_balance);

    std::cout << "Ваш счёт: " << ptr->account_number << ", "
        << ptr->name << ", " << ptr->balance << std::endl;

    delete ptr; 
    return 0;
}
