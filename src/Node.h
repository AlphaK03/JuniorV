//
// Created by keylo on 18/9/2022.
//

#ifndef JUNIORV_NODE_H
#define JUNIORV_NODE_H

using namespace std;
template <class tipo>
        
class Node {
private:
    tipo *datos;
    Node *siguente;

public:
    Node();
    tipo *getDatos()const;
    void setDatos(tipo *datos);
    Node *getSiguente() const;
    void setSiguente(Node *siguente);
};


#endif //JUNIORV_NODE_H
