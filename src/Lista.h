
#ifndef PRACTICA_1_LISTA_H
#define PRACTICA_1_LISTA_H
#include "Nodo.h"
#include <sstream>

template <class tipo>

class Lista {

private:
    Nodo<tipo> *raiz;
    Nodo<tipo> *cola;
public:
    Lista();
    ~Lista();
    bool isEmpty();
    tipo* valorInicio();
    tipo valorFinal();
    void agregar(Nodo<tipo> referencia, tipo valor);
    void agregarInicio(tipo valor);
    void agregarFinal(tipo valor);
    void borrar(Nodo<tipo> *referencia);
    void borrarInicio();
    void borrarFinal();
    int contador();

};


template<class tipo>
Lista<tipo>::Lista(){
    raiz=new Nodo<tipo>;
    cola=new Nodo<tipo>;
    raiz->setSiguente(cola);
    cola->setAnterior(raiz);
}

template<class tipo>
Lista<tipo>::~Lista() {
    Nodo<tipo> *temp;
    Nodo<tipo> *anterior;
    if (raiz->getSiguente()== nullptr){
        delete raiz;
    }
    else{
        while (raiz->getSiguente()!= nullptr){
            temp=raiz;
            while (temp->getSiguente()!= nullptr){
                anterior=temp;
                temp= temp->getSiguente();
            }
            anterior->setSiguente(nullptr);
            delete temp;
        }

    }
    cout<<"lista borrada";

}

template<class tipo>
bool Lista<tipo>::isEmpty() {
    return (raiz->getSiguente()==cola);
}

template<class tipo>
tipo* Lista<tipo>::valorInicio(){
    Nodo<tipo> *temp=raiz->getSiguente();
    if(temp== nullptr){
        return -1;
    }
    return temp->getDatos();
}

template<class tipo>
tipo Lista<tipo>::valorFinal(){
    Nodo<tipo> *temp=cola->getSiguente();
    if(temp== nullptr){
        return -1;
    }
    return temp->getDatos();
}

template<class tipo>
void Lista<tipo>::agregar(Nodo<tipo> referencia, tipo valor){
    auto *nuevo= new Nodo<tipo>;
    nuevo->setDatos(valor);
    nuevo->setSiguente(referencia);
    nuevo->setAnterior(referencia.getAnterior());
    referencia.getAnterior()->setSiguente(nuevo);
    referencia.setAnterior(nuevo);
}

template<class tipo>
void Lista<tipo>::agregarInicio(tipo valor){
    agregar(raiz->getSiguente(),valor);
}

template<class tipo>
void Lista<tipo>::agregarFinal(tipo valor){
    agregar(cola,valor);
}

template<class tipo>
void Lista<tipo>::borrar(Nodo<tipo> *referencia){
    Nodo<tipo> * ant= referencia->getAnterior();
    Nodo<tipo> *sig= referencia->getSiguente();
    ant->setSiguente(sig);
    sig->setAnterior(ant);
    delete referencia;
}

template<class tipo>
void Lista<tipo>::borrarInicio(){
    borrar(raiz->getSiguente());
}

template<class tipo>
void Lista<tipo>::borrarFinal(){
    borrar(cola->getAnterior());
}

template<class tipo>
int Lista<tipo>::contador(){
    Nodo<tipo> *temp=raiz->getSiguente();
    int contador=0;
    if(temp!= nullptr){
        while (temp!=cola){
            contador++;
            temp= temp->getSiguente();
        }
    }
    return contador;
}



#endif //PRACTICA_1_LISTA_H
