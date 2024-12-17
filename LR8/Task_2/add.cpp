#include "functions.h"

void add() {
    std::cout << "\nВведите количество спортсменов, которых хотите добавить\n";
    int add_person;
    std::cin >> add_person;

    a = (person*)realloc(a, (n + add_person) * sizeof(person));

    for (int i = n; i < n + add_person; i++) {
        std::cout << "Введите данные " << i + 1 << "-го спортсмена\n";
        std::cout << "Фамилия: ";
        std::cin >> a[i].surname;

        std::cout << "Имя: ";
        std::cin >> a[i].name;

        std::cout << "Отчество: ";
        std::cin >> a[i].papa;

        std::cout << "Страна: ";
        std::cin >> a[i].country;

        std::cout << "Название команды: ";
        std::cin >> a[i].team;

        std::cout << "Игровой номер: ";
        if (a[i].country == "Китай") {
            std::cin >> a[i].data.number_l;
        } else {
            std::cin >> a[i].data.number_i;
        }
        std::cout << "Возраст: ";
        std::cin >> a[i].age;

        std::cout << "Рост: ";
        std::cin >> a[i].height;

        std::cout << "Вес: ";
        std::cin >> a[i].weight;

        std::cout << '\n';
    }

    n += add_person;
}