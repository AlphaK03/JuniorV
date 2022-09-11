//
// Created by keylo on 31/8/2022.
//

#include "iostream"
#include "Estrella.h"
#include "Rayo.h"

using namespace std;

int main(){

    Estrella estrella;

    estrella.agregarNumero(1);
    estrella.agregarNumero(2);
    estrella.agregarNumero(3);
    estrella.agregarNumero(4);

    for(auto num : estrella.getListaNumeros()){
        cout << num << " ";
    }

    vector<int>* lista = &estrella.getListaNumeros();


    Rayo rayo;
    rayo.setPunteroAListaNumeros(lista);

    rayo.modificarUltimoDato(7);

    cout << endl;

    for(auto num : estrella.getListaNumeros()){
        cout << num << " ";
    }


    return 0;

}