#include "functions.h"

void change(int idx) {
    std::cout << "\nВведите номер критерия который хотите изменить\n";
    int num;
    std::cin >> num;
    std::string new_surname, new_name, new_papa, new_post;
    int new_number;
    long long new_years;

    switch (num) {
        case 1:
            std::cout << "\nВведите новую фамилию сотрудника\n";
            std::cin >> new_surname;
            a[idx].surname = new_surname;
            break;
        case 2:
            std::cout << "\nВведите новое имя сотрудника\n";
            std::cin >> new_name;
            a[idx].name = new_name;
            break;
        case 3:
            std::cout << "\nВведите новое отчество сотрудника\n";
            std::cin >> new_papa;
            a[idx].papa = new_papa;
            break;
        case 4:
            std::cout << "\nВведите новый номер отдела сотрудника\n";
            std::cin >> new_number;
            a[idx].number = new_number;
            break;
        case 5:
            std::cout << "\nВведите новую должность сотрудника\n";
            std::cin >> new_post;
            a[idx].post = new_post;
            break;
        default:
            std::cout << "\nВведите новый стаж сотрудника\n";
            std::cin >> new_years;
            if (a[idx].post == "Директор") {
                a[idx].data.years_l = new_years;
            } else {
                a[idx].data.years_i = new_years;
            }
            break;
    }
}

void change_all() {
    std::cout<< "\nВведите по какому критерию хотите изменить данные о сотрудниках\n";
    int num;
    std::cin >> num;

    std::string key_surname, key_name, key_papa, key_post;
    int key_number;
    std::string new_surname, new_name, new_papa, new_post;
    int new_number;
    long long new_years, key_years;

    switch (num) {
        case 1:
            std::cout << "\nВведите какую фамилию хотите изменить\n";
            std::cin >> key_surname;
            std::cout << "Введите новую фамилию для этих сотрудников\n";
            std::cin >> new_surname;

            for (int i = 0; i < n; i++) {
                if (a[i].surname == key_surname) {
                    a[i].surname = new_surname;
                }
            }
            break;
        case 2:
            std::cout << "\nВведите какое имя хотите изменить\n";
            std::cin >> key_name;
            std::cout << "Введите новое имя для этих сотрудников\n";
            std::cin >> new_name;

            for (int i = 0; i < n; i++) {
                if (a[i].name == key_name) {
                    a[i].name = new_name;
                }
            }
            break;
        case 3:
            std::cout << "\nВведите какое отчество хотите изменить\n";
            std::cin >> key_papa;
            std::cout << "Введите новое отчество для этих сотрудников\n";
            std::cin >> new_papa;

            for (int i = 0; i < n; i++) {
                if (a[i].papa == key_papa) {
                    a[i].papa = new_papa;
                }
            }
            break;
        case 4:
            std::cout << "\nВведите какой номер отдела хотите изменить\n";
            std::cin >> key_number;
            std::cout << "Введите новый номер отдела для этих сотрудников\n";
            std::cin >> new_number;

            for (int i = 0; i < n; i++) {
                if (a[i].number == key_number) {
                    a[i].number = new_number;
                }
            }
            break;
        case 5:
            std::cout << "\nВведите какую должность хотите изменить\n";
            std::cin >> key_post;
            std::cout << "Введите новую должность для этих сотрудников\n";
            std::cin >> new_post;

            for (int i = 0; i < n; i++) {
                if (a[i].post == key_post) {
                    a[i].post = new_post;
                }
            }
            break;
        default:
            std::cout << "\nВведите какой стаж хотите изменить\n";
            std::cin >> key_years;
            std::cout << "Введите новый стаж для этих сотрудников\n";
            std::cin >> new_years;

            for (int i = 0; i < n; i++) {
                if (((a[i].post == "Директор") ? a[i].data.years_l : a[i].data.years_i) == key_years) {
                    if (a[i].post == "Директор") {
                        a[i].data.years_l = new_years;
                    } else {
                        a[i].data.years_i = new_years;
                    }

                }
            }
            break;
    }
}

void delete_all() {
    std::cout << "Введите по какому критерию хотите удалить сотрудников\n";
    int pr;
    std::cin >> pr;

    std::string key_surname, key_name, key_papa, key_post;
    int key_number;
    long long key_years;
    std::map<int, bool> used;

    switch (pr) {
        case 1:
            std::cout << "\nВведите какую фамилию хотите удалить\n";
            std::cin >> key_surname;

            for (int i = 0; i < n; i++) {
                if (a[i].surname == key_surname) {
                    used[i] = 1;
                }
            }
            break;
        case 2:
            std::cout << "\nВведите какое имя хотите удалить\n";
            std::cin >> key_name;

            for (int i = 0; i < n; i++) {
                if (a[i].name == key_name) {
                    used[i] = 1;
                }
            }
            break;
        case 3:
            std::cout << "\nВведите какое отчество хотите удалить\n";
            std::cin >> key_papa;

            for (int i = 0; i < n; i++) {
                if (a[i].papa == key_papa) {
                    used[i] = 1;
                }
            }
            break;
        case 4:
            std::cout << "\nВведите какой номер отдела хотите удалить\n";
            std::cin >> key_number;

            for (int i = 0; i < n; i++) {
                if (a[i].number == key_number) {
                    used[i] = 1;
                }
            }
            break;
        case 5:
            std::cout << "\nВведите какую должность хотите удалить\n";
            std::cin >> key_post;

            for (int i = 0; i < n; i++) {
                if (a[i].post == key_post) {
                    used[i] = 1;
                }
            }
            break;
        default:
            std::cout << "\nВведите какой стаж хотите удалить\n";
            std::cin >> key_years;

            for (int i = 0; i < n; i++) {
                if (((a[i].post == "Директор") ? a[i].data.years_l : a[i].data.years_i) == key_years) {
                    used[i] = 1;
                }
            }
            break;
    }

    int new_n = 0;
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            new_n++;
        }
    }

    person* b = (person*)malloc(new_n * sizeof(person));
    int pos = 0;

    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            b[pos] = a[i];
            pos++;
        }
    }

    free(a);
    a = b;
    b = nullptr;
    n = new_n;
}

void delete_and_change() {
    std::cout << "Напомню вид структуры :\n";
    std::cout << "1. Фамилия\n";
    std::cout << "2. Имя\n";
    std::cout << "3. Отчество\n";
    std::cout << "4. Номер отдела\n";
    std::cout << "5. Должность\n";
    std::cout << "6. Стаж\n\n";

    std::cout << "Если хотите удалить сотрудников введите 1, иначе запусится режим изменения\n";
    std::string pr1, pr2;
    std::cin >> pr1;

    if (pr1 == "1") {
        std::cout << "\nЕсли хотите удалить конкретных сотрудников введите 1, иначе любое значение (для удаления всех по значению)\n";
        std::cin >> pr2;

        if (pr2 == "1") {
            std::cout << "\nВведите количество сотрудников, которых хотите удалить\n";
            int cnt;
            std::cin >> cnt;
            std::cout << "Введите номера этих сотрудников : ";
            std::map<int, bool> used;

            for (int i = 0; i < cnt; i++) {
                int idx;
                std::cin >> idx;
                idx--;
                used[idx] = 1;
            }

            int new_n = 0;
            for (int i = 0; i < n; i++) {
                if (!used[i]) {
                    new_n++;
                }
            }

            person* b = (person*)malloc(new_n * sizeof(person));
            int pos = 0;

            for (int i = 0; i < n; i++) {
                if (!used[i]) {
                    b[pos] = a[i];
                    pos++;
                }
            }

            free(a);
            a = b;
            b = nullptr;
            n = new_n;
            std::cout << '\n';
            return;
        }

        delete_all();
        return;
    }

    std::cout << "\nЕсли хотите изменить конкретных сотрудников введите 1, иначе любое значение (для изменения всех по значению)\n";
    std::cin >> pr2;

    if (pr2 == "1") {
        std::cout << "\nВведите количество сотрудников, которых хотите изменить\n";
        int cnt;
        std::cin >> cnt;

        for (int i = 0; i < cnt; i++) {
            std::cout << "\nВведите номер сотрудника, которого хотите изменить\n";
            int idx;
            std::cin >> idx;
            idx--;

            std::cout << "\nВведите количество изменений, которые хотите сделать в информации " << idx + 1 <<"-го сотрудника\n";
            int kol;
            std::cin >> kol;

            while(kol--) {
                change(idx);
            }
        }
        std::cout << '\n';
        return;
    }

    change_all();
    std::cout << '\n';
}