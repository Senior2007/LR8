#include "functions.h"

void input() {
    std::cout << "Введите количество сотрудников\n";
    std::cin >> n;
    std::cout << '\n';

    a = (person*)malloc(n * sizeof(person));
    for (int i = 0; i < n; i++) {
        std::cout << "Введите данные " << i + 1 << "-го сотрудника\n";
        std::cout << "Фамилия: ";
        std::cin >> a[i].surname;

        std::cout << "Имя: ";
        std::cin >> a[i].name;

        std::cout << "Отчество: ";
        std::cin >> a[i].papa;

        std::cout << "Номер отдела: ";
        std::cin >> a[i].number;

        std::cout << "Должность: ";
        std::cin >> a[i].post;

        std::cout << "Стаж: ";
        std::cin >> a[i].years;
        std::cout << '\n';
    }
}