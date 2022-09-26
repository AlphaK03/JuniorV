//
// Created by keylo on 18/9/2022.
//

#ifndef JUNIORV_LIST_H
#define JUNIORV_LIST_H
#include "Node.h"
#include "iostream"
#include "sstream"


template <class tipo>

class List {

private:
    Node<tipo> *raiz;
public:
    List();
    ~List();
    string toString();
    tipo * inicio();
    void borraInicio();
    void agregarInicio(tipo*);
    //void agregarFinal(T*);
    //bool borrar(T*,string &)



};


#endif //JUNIORV_LIST_H
