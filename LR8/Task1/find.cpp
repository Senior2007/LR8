#include "functions.h"

void find() {
    std::cout << "Введите по какому признаку хотите найти информацию\n";
    std::cout << "1. Фамилия\n";
    std::cout << "2. Имя\n";
    std::cout << "3. Отчество\n";
    std::cout << "4. Номер отдела\n";
    std::cout << "5. Должность\n";
    std::cout << "6. Стаж\n\n";

    int pr;
    std::cin >> pr;
    std::cout << "Введите по какому значению хотите найти данные\n";
    std::string s;
    int cnt = 0, x;

    switch (pr) {
        case 1:
            std::cin >> s;

            std::cout << "Результат поиска :\n";
            for (int i = 0; i < n; i++) {
                if (a[i].surname == s) {
                    cnt++;
                    std::cout << "Фамилия: " << a[i].surname << '\n';
                    std::cout << "Имя: " << a[i].name << '\n';
                    std::cout << "Отчество: " << a[i].papa << '\n';
                    std::cout << "Номер отдела: " << a[i].number << '\n';
                    std::cout << "Должность: " << a[i].post << '\n';
                    std::cout << "Стаж: " << a[i].years << '\n';
                    std::cout << '\n';
                }
            }
            if (cnt == 0) {
                std::cout << "Подходящих сотрудников нет\n\n";
            }
            break;
        case 2:
            std::cin >> s;

            std::cout << "Результат поиска :\n";
            for (int i = 0; i < n; i++) {
                if (a[i].name == s) {
                    cnt++;
                    std::cout << "Фамилия: " << a[i].surname << '\n';
                    std::cout << "Имя: " << a[i].name << '\n';
                    std::cout << "Отчество: " << a[i].papa << '\n';
                    std::cout << "Номер отдела: " << a[i].number << '\n';
                    std::cout << "Должность: " << a[i].post << '\n';
                    std::cout << "Стаж: " << a[i].years << '\n';
                    std::cout << '\n';
                }
            }
            if (cnt == 0) {
                std::cout << "Подходящих сотрудников нет\n\n";
            }
            break;
        case 3:
            std::cin >> s;

            std::cout << "Результат поиска :\n";
            for (int i = 0; i < n; i++) {
                if (a[i].papa == s) {
                    cnt++;
                    std::cout << "Фамилия: " << a[i].surname << '\n';
                    std::cout << "Имя: " << a[i].name << '\n';
                    std::cout << "Отчество: " << a[i].papa << '\n';
                    std::cout << "Номер отдела: " << a[i].number << '\n';
                    std::cout << "Должность: " << a[i].post << '\n';
                    std::cout << "Стаж: " << a[i].years << '\n';
                    std::cout << '\n';
                }
            }
            if (cnt == 0) {
                std::cout << "Подходящих сотрудников нет\n\n";
            }
            break;
        case 4:
            std::cin >> x;

            std::cout << "Результат поиска :\n";
            for (int i = 0; i < n; i++) {
                if (a[i].number == x) {
                    cnt++;
                    std::cout << "Фамилия: " << a[i].surname << '\n';
                    std::cout << "Имя: " << a[i].name << '\n';
                    std::cout << "Отчество: " << a[i].papa << '\n';
                    std::cout << "Номер отдела: " << a[i].number << '\n';
                    std::cout << "Должность: " << a[i].post << '\n';
                    std::cout << "Стаж: " << a[i].years << '\n';
                    std::cout << '\n';
                }
            }
            if (cnt == 0) {
                std::cout << "Подходящих сотрудников нет\n\n";
            }
            break;
        case 5:
            std::cin >> s;

            std::cout << "Результат поиска :\n";
            for (int i = 0; i < n; i++) {
                if (a[i].post == s) {
                    cnt++;
                    std::cout << "Фамилия: " << a[i].surname << '\n';
                    std::cout << "Имя: " << a[i].name << '\n';
                    std::cout << "Отчество: " << a[i].papa << '\n';
                    std::cout << "Номер отдела: " << a[i].number << '\n';
                    std::cout << "Должность: " << a[i].post << '\n';
                    std::cout << "Стаж: " << a[i].years << '\n';
                    std::cout << '\n';
                }
            }
            if (cnt == 0) {
                std::cout << "Подходящих сотрудников нет\n\n";
            }
            break;
        default:
            std::cin >> x;

            std::cout << "Результат поиска :\n";
            for (int i = 0; i < n; i++) {
                if (a[i].years == x) {
                    cnt++;
                    std::cout << "Фамилия: " << a[i].surname << '\n';
                    std::cout << "Имя: " << a[i].name << '\n';
                    std::cout << "Отчество: " << a[i].papa << '\n';
                    std::cout << "Номер отдела: " << a[i].number << '\n';
                    std::cout << "Должность: " << a[i].post << '\n';
                    std::cout << "Стаж: " << a[i].years << '\n';
                    std::cout << '\n';
                }
            }
            if (cnt == 0) {
                std::cout << "Подходящих сотрудников нет\n\n";
            }
            break;
    }
}