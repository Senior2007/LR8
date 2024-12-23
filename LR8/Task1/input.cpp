#include "functions.h"

void input1() {
    std::cout << "\nВведите количество сотрудников\n";
    std::cin >> n;
    std::cout << '\n';

    a = (person*)malloc(n * sizeof(person));
    for (int i = 0; i < n; i++) {
        std::cout << "Введите данные " << i + 1 << "-го сотрудника\n";
        std::cout << "Фамилия: ";
        std::cin >> a[i].surname;

        std::cout << "Имя: ";
        std::cin >> a[i].name;

        std::cout << "Отчество: ";
        std::cin >> a[i].papa;

        std::cout << "Номер отдела: ";
        std::cin >> a[i].number;

        std::cout << "Должность: ";
        std::cin >> a[i].post;

        std::cout << "Стаж: ";
        if (a[i].post == "Директор") {
            std::cin >> a[i].data.years_l;
        } else {
            std::cin >> a[i].data.years_i;
        }
        std::cout << '\n';
    }
}

void input2() {
    metka:
    std::cout << "\nВведите по какому признаку хотите остановить ввод\n";
    std::cout << "1. Фамилия\n";
    std::cout << "2. Имя\n";
    std::cout << "3. Отчество\n";
    std::cout << "4. Номер отдела\n";
    std::cout << "5. Должность\n";
    std::cout << "6. Стаж\n\n";

    int pr, key_number, key_years;
    std::string key_surname, key_name, key_papa, key_post;
    std::cin >> pr;

    std::cout << "Введите значение признака\n";
    switch (pr) {
        case 1:
            std::cin >> key_surname;
            break;
        case 2:
            std::cin >> key_name;
            break;
        case 3:
            std::cin >> key_papa;
            break;
        case 4:
            std::cin >> key_number;
            break;
        case 5:
            std::cin >> key_post;
            break;
        case 6:
            std::cin >> key_years;
            break;
        default:
            std::cout << "\nНекорректный ввод\n\n";
            goto metka;
    }

    std::cout << '\n';
    bool pr_break = 0;
    while(1) {
        person* b = (person*)malloc((n + 1) * sizeof(person));
        for (int i = 0; i < n; i++) b[i] = a[i];

        std::cout << "Введите данные " << n + 1 << "-го сотрудника\n";
        std::cout << "Фамилия: ";
        std::cin >> b[n].surname;

        std::cout << "Имя: ";
        std::cin >> b[n].name;

        std::cout << "Отчество: ";
        std::cin >> b[n].papa;

        std::cout << "Номер отдела: ";
        std::cin >> b[n].number;

        std::cout << "Должность: ";
        std::cin >> b[n].post;

        std::cout << "Стаж: ";
        if (b[n].post == "Директор"){
            std::cin >> b[n].data.years_l;
        } else {
            std::cin >> b[n].data.years_i;
        }
        std::cout << '\n';

        n++;
        free(a);
        a = b;
        b = nullptr;

        switch (pr) {
            case 1:
                if (a[n - 1].surname == key_surname) {
                    pr_break = 1;
                }
                break;
            case 2:
                if (a[n - 1].name == key_name) {
                    pr_break = 1;
                }
                break;
            case 3:
                if (a[n - 1].papa == key_papa) {
                    pr_break = 1;
                }
                break;
            case 4:
                if (a[n - 1].number == key_number) {
                    pr_break = 1;
                }
                break;
            case 5:
                if (a[n - 1].post == key_post) {
                    pr_break = 1;
                }
                break;
            case 6:
                if (((a[n - 1].post == "Директор") ? a[n - 1].data.years_l : a[n - 1].data.years_i) == key_years) {
                    pr_break = 1;
                }
                break;
            default:
                break;
        }

        if (pr_break) {
            break;
        }
    }

    std::cout << '\n';
}

void input3() {
    std::cout << '\n';

    while(1) {
        std::cout << "Введите данные " << n + 1 << "-го сотрудника или символ * если хотите остановить ввод\n";
        std::cout << "Фамилия: ";

        std::string s;
        std::cin >> s;

        if (s == "*") {
            break;
        }

        person* b = (person*)malloc((n + 1) * sizeof(person));
        for (int i = 0; i < n; i++) b[i] = a[i];

        b[n].surname = s;

        std::cout << "Имя: ";
        std::cin >> b[n].name;

        std::cout << "Отчество: ";
        std::cin >> b[n].papa;

        std::cout << "Номер отдела: ";
        std::cin >> b[n].number;

        std::cout << "Должность: ";
        std::cin >> b[n].post;

        std::cout << "Стаж: ";
        if (b[n].post == "Директор") {
            std::cin >> b[n].data.years_l;
        } else {
            std::cin >> b[n].data.years_i;
        }
        std::cout << '\n';

        n++;
        free(a);
        a = b;
        b = nullptr;
    }

    std::cout << '\n';
}

void read_cur(std::ifstream& file, int idx) {
    auto readString = [&file]() {
        size_t length;
        file.read(reinterpret_cast<char*>(&length), sizeof(length));
        std::string str(length, '\0');
        file.read(&str[0], length);
        return str;
    };

    a[idx].surname = readString();
    a[idx].name = readString();
    a[idx].papa = readString();
    file.read(reinterpret_cast<char*>(&a[idx].number), sizeof(a[idx].number));
    a[idx].post = readString();
    file.read(reinterpret_cast<char*>(&a[idx].data), sizeof(a[idx].data));
}

void input4() {
    input_:
    std::cout << "\nВведите название файла с расширением (.bin)\n";
    std::string file_name;
    std::cin >> file_name;

    std::ifstream file(file_name, std::ios::binary);
    if (!file) {
        std::cerr << "Ошибка при открытии файла для чтения!\n";
        goto input_;
    }

    int count;
    file.read(reinterpret_cast<char*>(&count), sizeof(count));

    n = count;
    a = (person*)malloc(n * sizeof(person));

    for (int i = 0; i < n; i++) {
        read_cur(file, i);
    }

    file.close();
    std::cout << '\n';
}

void input() {
    free(a);
    a = nullptr;
    n = 0;

    input_:
    std::cout << "\n1. Ввод заранее известного количества сотрудников\n";
    std::cout << "2. Ввод до появления заданного признака\n";
    std::cout << "3. Ввод с диалогом\n";
    std::cout << "4. Чтение из двоичного файла\n";
    std::cout << "Введите режим ввода : ";

    int pr;
    std::cin >> pr;

    switch (pr) {
        case 1:
            input1();
            break;
        case 2:
            input2();
            break;
        case 3:
            input3();
            break;
        case 4:
            input4();
            break;
        default:
            std::cout << "\nНеправильный ввод\n";
            goto input_;
    }
}