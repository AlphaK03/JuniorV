//
// Created by keylo on 11/9/2022.
//

#ifndef JUNIORV_RAYO_H
#define JUNIORV_RAYO_H
#include "vector"


class Rayo {
private:
    std::vector<int>* punteroAListaNumeros;
public:
    Rayo();

    Rayo(std::vector<int> *punteroAListaNumeros);

    virtual ~Rayo();

    std::vector<int> *getPunteroAListaNumeros() const;

    void setPunteroAListaNumeros(std::vector<int> *punteroAListaNumeros);

    void modificarUltimoDato(int);

};


#endif //JUNIORV_RAYO_H
