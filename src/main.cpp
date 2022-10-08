//
// Created by keylo on 31/8/2022.
//

#include "Integer.h"
#include "MyStdLib.h"
#include "Lista.h"

using namespace std;
static Integer fibonacciIterative(Integer n) {
    Integer aux("1");
    if (n <= aux) {
        return n;
    }
    Integer fib = Integer("1");
    Integer prevFib = Integer("1");

    Integer i("2");

    while (i != n) {
        Integer temp = fib;
        fib += prevFib;
        prevFib = temp;
        i += aux;
    }
    return fib;
}
int main() {

    Integer num1("9989999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
    Integer num5("29999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");


    num5 = Integer("7");

    Integer numFibo("1");
    Integer numeroUno("1");

    Integer inte("1");
    while (inte != num5){
        cout << fibonacciIterative(inte) << endl;
        inte += numeroUno;
    }

    string ss = "12345678955";
    string ss2 = "000012430";

    auto* list = new Lista<int>;
    auto* list2 = new Lista<int>;
   /* int iterator = 0;
    auto newString = new int ();
    int  i = 0;

    while (ss[iterator] != '\0'){
            *newString += ss[iterator];
            iterator++;
            i++;
        if(i == 4 || ss[iterator] == '\0'){
            list->insertar(newString);
            newString = reinterpret_cast<int *>(new string());
            i = 0;
        }
    };*/
    int iterator = 0;
    string newString;
    int  i = 0;

    while (ss[iterator] != '\0'){
        newString += ss[iterator];

        iterator++;
        i++;
        if(i == 4 || ss[iterator] == '\0'){
            int *val = new int ();
            *val = MyStdLib::strToInt(newString);
            list->insertar(val);
            val = new int();
            newString.clear();
            i = 0;
        }
    };

    iterator = 0;
    newString.clear();
    while (ss2[iterator] != '\0'){
        newString += ss2[iterator];

        iterator++;
        i++;
        if(i == 4 || ss2[iterator] == '\0'){
            int *val = new int ();
            *val = MyStdLib::strToInt(newString);
            list2->insertar(val);
            val = new int();
            newString.clear();
            i = 0;
        }
    };
   /*int iterator = 0;
    string newString;
    int  i = 0;

    while (ss[iterator] != '\0'){
        newString += ss[iterator];
        iterator++;
        i++;
        if(i == 4 || ss[iterator] == '\0'){
            int val = 0;
            val = MyStdLib::strToInt(newString);
            list->insertar(&val);
            newString.clear();
            i = 0;
        }
    };*/

    string  dato1;
    string  dato2;
    dato2 = std::to_string(*list->buscarElemento(1));

    cout << "\n" << endl;
    Integer num2;
    num2 = num5 - num1;




//    while (integerChars[0] != '\0'){
//        string fourLetters{};
//        for(int i = 0; i < 3; i++){
//            {
//                fourLetters += integerChars[0];
//                integerChars = std::to_string(remove(&integerChars[0]));
//            }
//        }
//        this->value->insertar(new int(MyStdLib::strToInt(fourLetters)));
//    }
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