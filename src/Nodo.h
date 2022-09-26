
#ifndef PRACTICA_1_NODO_H
#define PRACTICA_1_NODO_H
#include <iostream>

using namespace std;
template <class tipo>

class Nodo {
private:
    tipo *datos;
    Nodo *siguente;
    Nodo *anterior;
public:
    Nodo();
    tipo *getDatos()const;

    void setDatos(tipo *datos);
    Nodo<tipo> *getSiguente() const;
    void setSiguente(Nodo *siguente);
    Nodo<tipo> *getAnterior() const;
    void setAnterior(Nodo *anterior);

    virtual ~Nodo();


};

template <class tipo>
Nodo<tipo>::Nodo() {
    datos= nullptr;
    siguente= nullptr;
    anterior= nullptr;
}

template<class tipo>
tipo *Nodo<tipo>::getDatos() const {
    return datos;
}

template<class tipo>
void Nodo<tipo>::setDatos(tipo *datos) {
    Nodo::datos=datos;
}

template<class tipo>
Nodo<tipo> *Nodo<tipo>::getSiguente() const {
    return siguente;
}

template<class tipo>
void Nodo<tipo>::setSiguente(Nodo<tipo> *siguente) {
    Nodo::siguente=siguente;
}

template<class tipo>
Nodo<tipo> *Nodo<tipo>::getAnterior() const {
    return anterior;
}

template<class tipo>
void Nodo<tipo>::setAnterior(Nodo<tipo> *anterior) {
    Nodo::anterior = anterior;
}

template<class tipo>
Nodo<tipo>::~Nodo() = default;

#endif //PRACTICA_1_NODO_H
