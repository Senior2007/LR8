#include "functions.h"

void output() {
    if (n == 0) {
        std::cout << "\nСпортсменов нет\n\n";
    }

    for (int i = 0; i < n; i++) {
        std::cout << "Данные " << i + 1 << "-го спортсмена\n";
        std::cout << "Фамилия: ";
        std::cout << a[i].surname << '\n';

        std::cout << "Имя: ";
        std::cout << a[i].name << '\n';

        std::cout << "Отчество: ";
        std::cout << a[i].papa << '\n';

        std::cout << "Страна: ";
        std::cout << a[i].country << '\n';

        std::cout << "Название команды: ";
        std::cout << a[i].team << '\n';

        std::cout << "Игровой номер: ";
        std::cout << ((a[i].country == "Китай") ? a[i].data.number_l : a[i].data.number_i) << '\n';

        std::cout << "Возраст: ";
        std::cout << a[i].age << '\n';

        std::cout << "Рост: ";
        std::cout << a[i].height << '\n';

        std::cout << "Вес: ";
        std::cout << a[i].weight << '\n';
        std::cout << '\n';
    }
}