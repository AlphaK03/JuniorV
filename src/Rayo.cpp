//
// Created by keylo on 11/9/2022.
//

#include "Rayo.h"

#include <utility>

Rayo::~Rayo() {

}

Rayo::Rayo() {}

std::vector<int> *Rayo::getPunteroAListaNumeros() const {
    return punteroAListaNumeros;
}

void Rayo::setPunteroAListaNumeros(std::vector<int> *punteroAListaNumeros) {
    Rayo::punteroAListaNumeros = punteroAListaNumeros;
}

void Rayo::modificarUltimoDato(int dato) {
    (*punteroAListaNumeros)[3] = dato;
}

Rayo::Rayo(std::vector<int> *punteroAListaNumeros) : punteroAListaNumeros(punteroAListaNumeros) {}
