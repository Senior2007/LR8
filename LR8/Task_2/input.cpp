#include "functions.h"

void input_file() {
    std::string s;
    input:
    std::cout << "Введите название файла с расширением\n";
    std::cin >> s;

    std::ifstream file(s);

    if (!file.is_open()) {
        std::cerr << "Ошибка: файл \"" << s << "\" не существует или не может быть открыт\n";
        goto input;
    }

    file >> n;
    a = (person*)malloc(n * sizeof(person));

    for (int i = 0; i < n; i++) {
        file >> a[i].surname;
        file >> a[i].name;
        file >> a[i].papa;
        file >> a[i].country;
        file >> a[i].team;
        if (a[i].country == "Китай") {
            file >> a[i].data.number_l;
        } else {
            file >> a[i].data.number_i;
        }
        file >> a[i].age;
        file >> a[i].height;
        file >> a[i].weight;
    }

    file.close();
}

void input() {
    free(a);
    a = nullptr;
    n = 0;

    std::cout << "\nЕсли хотите считать данные из файла - введите 1 иначе любое значение\n";
    std::string prr;
    std::cin >> prr;

    if (prr == "1") {
        input_file();
        return;
    }

    std::cout << "\nВведите количество спортсменов\n";
    std::cin >> n;
    std::cout << '\n';

    a = (person*)malloc(n * sizeof(person));
    for (int i = 0; i < n; i++) {
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
}