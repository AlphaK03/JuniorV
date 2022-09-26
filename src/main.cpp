//
// Created by keylo on 31/8/2022.
//

#include "Estrella.h"
#include "Rayo.h"
#include "Integer.h"
#include "MyStdLib.h"
#include "List.h"
#include "Stack.h"

using namespace std;

int main() {

    Stack<Integer> list;


    cout << "Escribe un numero: " << endl;

    Integer num1("1000000000");
    cout << "El valor de num1 es: " << num1 << endl;
    list.push(&num1);
    Integer num2("3");
    cout << "El valor de num2 es: " << num2 << endl;


    Integer resultado;
    resultado += num1 + num1 + num2;
    cout << "El resultado es: " << resultado << endl;


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