/****************************/
/*  Univercidad Nacional.
/*  Escuela de informatica.
/*  Profesor Georges Alfaro Salazar
/*  Integrantes:
/*  Keilor Cortes Cascante
/*  Jennifer Lobo Vasquez
/****************************/

#include "Integer.h"
#include "MyStdLib.h"
#include "Lista.h"
void test(){
    cout<<"Prueba con datos quemados...";
    cout<<endl<<"Suma"<<endl;
    Integer num1("1000000000000000000000000000011");
    Integer num2("5000000000000000000000000000006");
    cout<<"  100000000000000000000000000011"<<endl;
    cout<<"+ 000000000000000000000000000006"<<endl;
    cout<<"  ------------------------------"<<endl;
    cout<<"  "<<num1+num2<<endl;

    cout<<endl<<"Resta"<<endl;
    num1.setIntegerChars("100000200000000342588910898");
    num2.setIntegerChars("100000200000000342588910887");
    cout<<"  100000200000000342588910898"<<endl;
    cout<<"- 100000200000000342588910887"<<endl;
    cout<<"  ---------------------------"<<endl;
    cout<<"  "<<num1-num2<<endl;

    cout<<endl<<"Multiplicacion"<<endl;
    num1.setIntegerChars("100000000000000000000000000000021");
    num2.setIntegerChars("5");
    cout<<"  100000000000000000000000000000021"<<endl;
    cout<<"  *                               5"<<endl;
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

    cout<<endl<<"Factorial-> 100"<<endl;
    Integer num("100");
    cout<<num.factorial()<<endl;

    cout<<endl<<"Sucecion de Fibonacci-> 1000"<<endl;
    num.setIntegerChars("1000");
    cout<<num.fibonacci()<<endl;

    cout<<endl<<"Combinaciones-> 10,5"<<endl;
    cout<<num.comb(10,5)<<endl;
}
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
    test();

    Integer num1("1000000000000000000000000000002245");
    Integer num5("5");
   // cout<<num1*num5<<endl;



    num5 = Integer("12");

    Integer numFibo("1");
    Integer numeroUno("1");

    Integer inte("1");
    while (inte != num5){
        //cout << fibonacciIterative(inte) << endl;
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