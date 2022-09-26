//
// Created by keylo on 18/9/2022.
//

#include "Node.h"
template <class tipo>
Node<tipo>::Node() {
    datos= nullptr;
    siguente= nullptr;
}

template<class tipo>
tipo *Node<tipo>::getDatos() const {
    return datos;
}

template<class tipo>
void Node<tipo>::setDatos(tipo *datos) {
    Node::datos=datos;
}

template<class tipo>
Node<tipo> *Node<tipo>::getSiguente() const {
    return siguente;
}

template<class tipo>
void Node<tipo>::setSiguente(Node *siguente) {
    Node::siguente=siguente;
}