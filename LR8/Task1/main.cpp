#include "functions.h"

person* a;
int n;
bool task_end = 0;

int main() {
    std::cout << "Структура имеет вид :\n";
    std::cout << "1. Фамилия\n";
    std::cout << "2. Имя\n";
    std::cout << "3. Отчество\n";
    std::cout << "4. Номер отдела\n";
    std::cout << "5. Должность\n";
    std::cout << "6. Стаж\n\n";

    menu();

    while (1) {
        std::cout << "Введите номер функции (или число 7 чтобы просмотреть меню функций)\n";
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
                find();
                break;
            case 5:
                delete_and_change();
                break;
            case 6:
                sort();
                break;
            case 7 :
                menu();
                break;
            default:
                task_end = 1;
                break;
        }

        if (task_end) break;
    }

    free(a);
    return 0;
}
