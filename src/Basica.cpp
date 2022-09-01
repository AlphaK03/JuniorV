//
// Created by keylo on 31/8/2022.
//

#include "Basica.h"
#include "iostream"

Basica::Basica(int a) : a(a) {}

Basica::Basica() = default;

void Basica::calcular(int* j, int z, int i) {
    std::cout << *j << std::endl;
    *j = a * i;
    z  = 2;
    a  = i + *j + z;
}

void Basica::modificar(int* k, int* p) {
    *k = 5;
    *p = *k;
}

int Basica::getA() const {
    return a;
}

void Basica::setA(int a) {
    Basica::a = a;
}

Basica::~Basica() = default;
