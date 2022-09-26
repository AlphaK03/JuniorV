//
// Created by keylo on 18/9/2022.
//

#include "List.h"
template<class tipo>
List<tipo>::List(){
    raiz = new Node<tipo>;
}


template<class tipo>
string List<tipo>::toString() {
    stringstream s;
    Node<tipo> *temporal=raiz;
    if (temporal->getSiguente()== nullptr){
        s<<"List vacia"<<endl;
    }
    else{
        temporal=temporal->getSiguente();
        do{
            s<<temporal->getDatos()->toString();
            s<<"   ";
            temporal=temporal->getSiguiente();
        }while(temporal!= nullptr);
        s<<"Null"<<endl;
    }
    return s.str();
}

template<class tipo>
void List<tipo>::agregarInicio(tipo *p) {

    Node<tipo> *nuevo=new Node<tipo>;
    nuevo->setDatos(p);
    nuevo->setSiguente(raiz->getSiguente());
    raiz->setSiguente(nuevo);

}

template<class tipo>
tipo * List<tipo>::inicio() {
    Node<tipo> *temp=raiz;
    if (temp->getSiguente() != nullptr){
        temp=temp->getSiguente();
        return temp->getDatos();
    }
    return nullptr;
}

template <class tipo>
void List<tipo>::borraInicio() {
    Node<tipo> *temp=raiz;
    if(temp->getSiguente()!= nullptr){
        temp=temp->getSiguente();
        raiz->setSiguente(temp->getSiguente());
        delete temp;
    }
}

template<class tipo>
List<tipo>::~List() = default;
