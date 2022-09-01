//
// Created by keylo on 31/8/2022.
//

#include "iostream"
#include "Basica.h"

using namespace std;

int main(){

     Basica obj (2);

     int i, j;
     int x = 1;
     int y = 3;

     obj.calcular (&x, x, y);
     cout << "valor de x = " << x << "  El valor de y = " << y << endl;
     cout << "El valor del atributo a = " << obj.getA() <<endl;
     Basica::modificar (&i, &j);
     cout << "El valor de i = " << i << " El valor de j = " << j << endl;


//    int numero = 2;
//
//    int* punteroNumero;
//
//    punteroNumero = &numero;
//
//    cout << *punteroNumero << endl;
//
//    *punteroNumero = 4;
//
//    cout << numero;


    return 0;

}