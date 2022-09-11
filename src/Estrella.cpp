//
// Created by keylo on 11/9/2022.
//

#include "Estrella.h"

Estrella::Estrella( std::vector<int> &listaNumeros) : listaNumeros(listaNumeros) {}

Estrella::~Estrella() {

}
 std::vector<int>& Estrella::getListaNumeros() {
    return listaNumeros;
}

void Estrella::setListaNumeros(const std::vector<int> &listaNumeros) {
    Estrella::listaNumeros = listaNumeros;
}

Estrella::Estrella() {}

void Estrella::agregarNumero(int numero) {
    listaNumeros.push_back(numero);
}
