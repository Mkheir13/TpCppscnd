//
// Created by kheir on 05/04/2022.
//


#include "../include/utils.h"


void exo1() {
    int a = 0;
    int &b = a;
    int *c = &a;

    affiche(reinterpret_cast<int *>(a));
    constructeur(reinterpret_cast<int *>(a));
    destructeur(reinterpret_cast<int *>(c));
}

void affiche(int *a) {
    std::cout << "a = " << a << std::endl;
    std::cout << "&a = " << &a << std::endl;
    std::cout << "*c = " << *a << std::endl;
}

void constructeur(int *a) {
    *a = 5;
}

void destructeur(int *a) {
    delete a;
}