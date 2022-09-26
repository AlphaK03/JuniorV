//
// Created by keylo on 31/8/2022.
//

#include "Integer.h"
#include "MyStdLib.h"
#include "Lista.h"

using namespace std;

int main() {

    cout << "Escribe un numero: " << endl;

    Integer num1("1000");
    cout << "El valor de num1 es: " << num1 << endl;
    Integer num2("3000");
    cout << "El valor de num2 es: " << num2 << endl;

    Integer resultado;
    resultado += num1 + num1 + num2;
    cout << "El resultado es: " << resultado << endl;

    int i = 9;
/*    Estrella estrella;

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
    }*/

    return 0;

}