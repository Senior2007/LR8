#include "functions.h"

void output() {
    if (n == 0) {
        std::cout << "\nСотрудников нет\n\n";
    }

    for (int i = 0; i < n; i++) {
        std::cout << "Данные " << i + 1<< "-го сотрудника :\n";
        std::cout << "Фамилия: " << a[i].surname << '\n';
        std::cout << "Имя: " << a[i].name << '\n';
        std::cout << "Отчество: " << a[i].papa << '\n';
        std::cout << "Номер отдела: " << a[i].number << '\n';
        std::cout << "Должность: " << a[i].post << '\n';
        std::cout << "Стаж: " << a[i].years << '\n';
        std::cout << '\n';
    }
}