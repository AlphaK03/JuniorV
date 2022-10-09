/*
    UNIVERSIDAD NACIONAL DE COSTA RICA.
        Escuela de informatica.
    Profesor:
        Georges Alfaro Salazar
    Integrantes:
        Keylor Cortes Cascante 504350713
        Jennifer Lobo Vasquez 208020417
*/
/*
 *
 *
 *
 * El código incluye una carpeta de Testing "/tst" que
 * utiliza GoogleTest "/lib/googletest", hacer caso omiso
 * al código en esta sección.:)
 *
 * El UML se encuentra en la carpeta "/UML"
 *
 *
 *
 * */
//
#include "Integer.h"
#include "MyStdLib.h"
#include "Lista.h"

void test(){
    cout<<"Prueba con datos quemados...";
    cout<<endl<<"Suma"<<endl;
    Integer num1("12345654321234567898765432123456789987654322345011");
    Integer num2("512345664321234565456754345677654345678906");
    cout<<  num1 <<endl;
    cout<< "+       " <<  num2 <<endl;
    cout<<" -------------------------------------------------"<<endl;
    cout<< num1+num2<<endl;

    cout<<endl<<"Resta"<<endl;
    num1.setIntegerChars("100000200000000342588910898");
    num2.setIntegerChars("100000200000000342588910887");
    cout<< "    " << num1   <<endl;
    cout<< "-   " << num2 <<endl;
    cout<<" ------------------------------"<<endl;
    cout<<"    "<< num1 - num2 <<endl;

    cout<<endl<<"Multiplicacion"<<endl;
    num1.setIntegerChars("100000000000000000000000000000021");
    num2.setIntegerChars("5");
    cout<<  "  " << num1 <<endl;
    cout<<  "*                                 " << num2 <<endl;
    cout<<"  ---------------------------------"<<endl;
    cout<<"  "<<num1*num2<<endl;

    cout<<endl<<"Operadores de comparacion"<<endl;
    cout<<"N1-> 100000200000000342588910898"<<endl;
    cout<<"N2-> 100000200000000342588910887"<<endl;
    if(num1==num1){
        cout<<"N1 == N1"<<endl;
    }
    if(num1!=num2){
        cout<<"N1 != N2"<<endl;
    }
    if(num1>num2){
        cout<<"N1 > N2"<<endl;
    }
    if(num2<num1){
        cout<<"N2 < N1"<<endl;
    }

    cout<<endl<<"Factorial-> 100"<<endl; //Si llega a 1000 pero tarda muchisimo tiempo!!!
    cout << "Si llega a 1000 pero tarda muchisimo tiempo!!! " << endl;
    Integer num("100");
    cout<<num.factorial(num)<<endl;

    cout<<endl<<"Sucecion de Fibonacci-> 1000"<<endl;
    num.setIntegerChars("1000");
    cout<<num.fibonacciIterative(num)<<endl;

}
using namespace std;

int main() {
   test();
    return 0;

}