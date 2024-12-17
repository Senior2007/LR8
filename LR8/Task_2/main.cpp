#include "functions.h"

person* a;
int n;
bool task_end = 0;

int main() {
    std::cout << "Структура имеет вид :\n";
    std::cout << "1. Фамилия\n";
    std::cout << "2. Имя\n";
    std::cout << "3. Отчество\n";
    std::cout << "4. Страна\n";
    std::cout << "5. Название команды\n";
    std::cout << "6. Игровой номер\n";
    std::cout << "7. Возраст\n";
    std::cout << "8. Рост\n";
    std::cout << "9. Вес\n\n";

    menu();

    while (1) {
        std::cout << "Введите номер функции (или число 6 чтобы просмотреть меню функций)\n";
        std::cout << "При любом другом вводе программа завершится\n";
        int type;
        std::cin >> type;
        if (std::cin.fail()) {
            break;
        }

        switch (type) {
            case 1 :
                input();
                break;
            case 2 :
                output();
                break;
            case 3 :
                add();
                break;
            case 4 :
                delete_and_change();
                break;
            case 5 :
                solve();
                break;
            case 6:
                menu();
                break;
            default:
                task_end = 1;
                break;
        }

        if (task_end) break;

        std::ofstream file("result.txt");
        for (int i = 0; i < n; i++) {
            file << "Данные " << i + 1 << "-го спортсмена\n";
            file << "Фамилия: ";
            file << a[i].surname << '\n';

            file << "Имя: ";
            file << a[i].name << '\n';

            file << "Отчество: ";
            file << a[i].papa << '\n';

            file << "Страна: ";
            file << a[i].country << '\n';

            file << "Название команды: ";
            file << a[i].team << '\n';

            file << "Игровой номер: ";
            file << ((a[i].country == "Китай") ? a[i].data.number_l : a[i].data.number_i) << '\n';

            file << "Возраст: ";
            file << a[i].age << '\n';

            file << "Рост: ";
            file << a[i].height << '\n';

            file << "Вес: ";
            file << a[i].weight << '\n';
            file << '\n';
        }
        file.close();
    }

    free(a);
    return 0;
}
