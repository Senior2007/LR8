#include "functions.h"

void print() {
    std::cout << "\nСотрудники со стажем более 20 лет :\n";
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (((a[i].post == "Директор") ? a[i].data.years_l : a[i].data.years_i) > 20) {
            cnt++;
            std::cout << "Фамилия: " << a[i].surname << '\n';
            std::cout << "Имя: " << a[i].name << '\n';
            std::cout << "Отчество: " << a[i].papa << '\n';
            std::cout << "Номер отдела: " << a[i].number << '\n';
            std::cout << "Должность: " << a[i].post << '\n';
            std::cout << "Стаж: " << ((a[i].post == "Директор") ? a[i].data.years_l : a[i].data.years_i) << '\n';
            std::cout << '\n';
        }
    }

    if (cnt == 0) {
        std::cout << "Таких сотрудников нет\n\n";
    }
}

void sort() {
    int l = 0, r = n - 1;
    bool pr = 0;

    do {
        pr = 0;

        for (int i = l; i < r; i++) {
            if (((a[i].post == "Директор") ? a[i].data.years_l : a[i].data.years_i) > ((a[i + 1].post == "Директор") ? a[i + 1].data.years_l : a[i + 1].data.years_i)) {
                std::swap(a[i], a[i + 1]);
                pr = 1;
            }
        }

        r--;

        for (int i = r; i > l; i--) {
            if (((a[i].post == "Директор") ? a[i].data.years_l : a[i].data.years_i) < ((a[i - 1].post == "Директор") ? a[i - 1].data.years_l : a[i - 1].data.years_i)) {
                std::swap(a[i], a[i - 1]);
                pr = 1;
            }
        }

        l++;

    } while(pr);

    print();
}