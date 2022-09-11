//
// Created by keylo on 11/9/2022.
//

#ifndef JUNIORV_ESTRELLA_H
#define JUNIORV_ESTRELLA_H
#include "vector"


class Estrella {

private:
    std::vector<int> listaNumeros;
public:
    Estrella(std::vector<int> &listaNumeros);

    virtual ~Estrella();

    std::vector<int>& getListaNumeros();

    void setListaNumeros(const std::vector<int> &listaNumeros);

    void agregarNumero(int);

    Estrella();
};


#endif //JUNIORV_ESTRELLA_H
