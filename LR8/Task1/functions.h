#ifndef TASK1_FUNCTIONS_H
#define TASK1_FUNCTIONS_H
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <map>

typedef struct person {
    std::string surname;
    std::string name;
    std::string papa;
    std::string post;
    int number;
    int years;

} person;

extern person* a;
extern int n;

void input();
void output();
void add();
void menu();
void find();
void delete_and_change();
void change(int);
void change_all();
void delete_all();
void sort();
void print();
#endif
