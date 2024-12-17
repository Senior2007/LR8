#include "functions.h"

void change(int idx) {
    std::cout << "\nВведите номер критерия который хотите изменить\n";
    int num;
    std::cin >> num;

    std::string new_surname, new_name, new_papa, new_country, new_team;
    int new_age, new_height, new_weight;
    long long new_number;

    switch (num) {
        case 1:
            std::cout << "Введите новую фамилию для этого спортсмена\n";
            std::cin >> new_surname;
            a[idx].surname = new_surname;
            break;
        case 2:
            std::cout << "Введите новое имя для этого спортсмена\n";
            std::cin >> new_name;
            a[idx].name = new_name;
            break;
        case 3:
            std::cout << "Введите новое отчество для этого спортсмена\n";
            std::cin >> new_papa;
            a[idx].papa = new_papa;
            break;
        case 4:
            std::cout << "Введите новую страну для этого спортсмена\n";
            std::cin >> new_country;
            a[idx].country = new_country;
            break;
        case 5:
            std::cout << "Введите новую команду для этого спортсмена\n";
            std::cin >> new_team;
            a[idx].team = new_team;
            break;
        case 6:
            std::cout << "Введите новый игровой номер для этого спортсмена\n";
            std::cin >> new_number;
            if (a[idx].country == "Китай"){
                a[idx].data.number_l = new_number;
            } else {
                a[idx].data.number_i = new_number;
            }
            break;
        case 7:
            std::cout << "Введите новый возраст для этого спортсмена\n";
            std::cin >> new_age;
            a[idx].age = new_age;
            break;
        case 8:
            std::cout << "Введите новый рост для этого спортсмена\n";
            std::cin >> new_height;
            a[idx].height = new_height;
            break;
        default:
            std::cout << "Введите новый вес для этого спортсмена\n";
            std::cin >> new_weight;
            a[idx].weight = new_weight;
            break;
    }
}

void change_all() {
    std::cout<< "\nВведите по какому критерию хотите изменить данные о спортсменах\n";
    int num;
    std::cin >> num;

    std::string key_surname, key_name, key_papa, key_country, key_team;
    int key_age, key_height, key_weight;
    std::string new_surname, new_name, new_papa, new_country, new_team;
    int new_age, new_height, new_weight;
    long long key_number, new_number;

    switch (num) {
        case 1:
            std::cout << "\nВведите какую фамилию хотите изменить\n";
            std::cin >> key_surname;
            std::cout << "Введите новую фамилию для этих спортсменов\n";
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
            std::cout << "Введите новое имя для этих спортсменов\n";
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
            std::cout << "Введите новое отчество для этих спортсменов\n";
            std::cin >> new_papa;

            for (int i = 0; i < n; i++) {
                if (a[i].papa == key_papa) {
                    a[i].papa = new_papa;
                }
            }
            break;
        case 4:
            std::cout << "\nВведите какую страну хотите изменить\n";
            std::cin >> key_country;
            std::cout << "Введите новую страну для этих спортсменов\n";
            std::cin >> new_country;

            for (int i = 0; i < n; i++) {
                if (a[i].country == key_country) {
                    a[i].country = new_country;
                }
            }
            break;
        case 5:
            std::cout << "\nВведите какую команду хотите изменить\n";
            std::cin >> key_team;
            std::cout << "Введите новую команду для этих спортсменов\n";
            std::cin >> new_team;

            for (int i = 0; i < n; i++) {
                if (a[i].team == key_team) {
                    a[i].team = new_team;
                }
            }
            break;
        case 6:
            std::cout << "\nВведите какой игровой номер хотите изменить\n";
            std::cin >> key_number;
            std::cout << "Введите новый игровой номер для этих спортсменов\n";
            std::cin >> new_number;

            for (int i = 0; i < n; i++) {
                if (((a[i].country == "Китай") ? a[i].data.number_l : a[i].data.number_i) == key_number) {
                    if (a[i].country == "Китай") {
                        std::cout << "!";
                        a[i].data.number_l = new_number;
                    } else {
                        a[i].data.number_i = new_number;
                    }
                }
            }
            break;
        case 7:
            std::cout << "\nВведите какой возраст хотите изменить\n";
            std::cin >> key_age;
            std::cout << "Введите новый возраст для этих спортсменов\n";
            std::cin >> new_age;

            for (int i = 0; i < n; i++) {
                if (a[i].age == key_age) {
                    a[i].age = new_age;
                }
            }
            break;
        case 8:
            std::cout << "\nВведите какой рост хотите изменить\n";
            std::cin >> key_height;
            std::cout << "Введите новый рост для этих спортсменов\n";
            std::cin >> new_height;

            for (int i = 0; i < n; i++) {
                if (a[i].height == key_height) {
                    a[i].height = new_height;
                }
            }
            break;
        default:
            std::cout << "\nВведите какой вес хотите изменить\n";
            std::cin >> key_weight;
            std::cout << "Введите новый вес для этих спортсменов\n";
            std::cin >> new_weight;

            for (int i = 0; i < n; i++) {
                if (a[i].weight == key_weight) {
                    a[i].weight = new_weight;
                }
            }
            break;
    }
}

void delete_all() {
    std::cout << "Введите по какому критерию хотите удалить спортсменов\n";
    int pr;
    std::cin >> pr;

    std::string key_surname, key_name, key_papa, key_country, key_team;
    int key_age, key_height, key_weight;
    std::map<int, bool> used;
    long long key_number;

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
            std::cout << "\nВведите какую страну хотите удалить\n";
            std::cin >> key_country;

            for (int i = 0; i < n; i++) {
                if (a[i].country == key_country) {
                    used[i] = 1;
                }
            }
            break;
        case 5:
            std::cout << "\nВведите какую команду хотите удалить\n";
            std::cin >> key_team;

            for (int i = 0; i < n; i++) {
                if (a[i].team == key_team) {
                    used[i] = 1;
                }
            }
            break;
        case 6:
            std::cout << "\nВведите какой игровой номер хотите удалить\n";
            std::cin >> key_number;

            for (int i = 0; i < n; i++) {
                if (((a[i].country == "Китай") ? a[i].data.number_l : a[i].data.number_i) == key_number) {
                    used[i] = 1;
                }
            }
            break;
        case 7:
            std::cout << "\nВведите какой возраст хотите удалить\n";
            std::cin >> key_age;

            for (int i = 0; i < n; i++) {
                if (a[i].age == key_age) {
                    used[i] = 1;
                }
            }
            break;
        case 8:
            std::cout << "\nВведите какой рост хотите удалить\n";
            std::cin >> key_height;

            for (int i = 0; i < n; i++) {
                if (a[i].height == key_height) {
                    used[i] = 1;
                }
            }
            break;
        default:
            std::cout << "\nВведите какой вес хотите удалить\n";
            std::cin >> key_weight;

            for (int i = 0; i < n; i++) {
                if (a[i].weight == key_weight) {
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
    std::cout << "\nНапомню вид структуры :\n";
    std::cout << "1. Фамилия\n";
    std::cout << "2. Имя\n";
    std::cout << "3. Отчество\n";
    std::cout << "4. Страна\n";
    std::cout << "5. Название команды\n";
    std::cout << "6. Игровой номер\n";
    std::cout << "7. Возраст\n";
    std::cout << "8. Рост\n";
    std::cout << "9. Вес\n\n";

    std::cout << "Если хотите удалить cпортсменов введите 1, иначе запусится режим изменения\n";
    std::string pr1, pr2;
    std::cin >> pr1;

    if (pr1 == "1") {
        std::cout << "\nЕсли хотите удалить конкретных спортсменов введите 1, иначе любое значение (для удаления всех по значению)\n";
        std::cin >> pr2;

        if (pr2 == "1") {
            std::cout << "\nВведите количество спортсменов, которых хотите удалить\n";
            int cnt;
            std::cin >> cnt;
            std::cout << "Введите номера этих спортсменов : ";
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

    std::cout << "\nЕсли хотите изменить конкретных спортсменов введите 1, иначе любое значение (для изменения всех по значению)\n";
    std::cin >> pr2;

    if (pr2 == "1") {
        std::cout << "\nВведите количество спортсменов, которых хотите изменить\n";
        int cnt;
        std::cin >> cnt;

        for (int i = 0; i < cnt; i++) {
            std::cout << "\nВведите номер спортсмена, которого хотите изменить\n";
            int idx;
            std::cin >> idx;
            idx--;

            std::cout << "\nВведите количество изменений, которые хотите сделать в информации " << idx + 1 <<"-го спортсмена\n";
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