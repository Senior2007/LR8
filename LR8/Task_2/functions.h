#ifndef TASK_2_FUNCTIONS_H
#define TASK_2_FUNCTIONS_H
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <set>
#include <iomanip>
#include <fstream>

typedef struct person {
    std::string surname;
    std::string name;
    std::string papa;
    std::string country;
    std::string team;
    union {
        int number_i;
        long long number_l;
    } data;
    int age;
    int height;
    int weight;

} person;

extern person* a;
extern int n;

void input_file();
void input();
void output();
void add();
void menu();
void solve();
void delete_and_change();
void change(int);
void change_all();
void delete_all();
#endif
