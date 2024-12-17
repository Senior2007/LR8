#include "functions.h"

void add() {
    std::cout << "\nВведите количество сотрудников, которых хотите добавить\n";
    int add_person;
    std::cin >> add_person;

    a = (person*)realloc(a, (n + add_person) * sizeof(person));

    for (int i = n; i < n + add_person; i++) {
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
        if (a[i].post == "Директор") {
            std::cin >> a[i].data.years_l;
        } else {
            std::cin >> a[i].data.years_i;
        }
        std::cout << '\n';
    }

    n += add_person;
}