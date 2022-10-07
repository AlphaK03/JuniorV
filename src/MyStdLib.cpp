//
// Created by keylo on 18/9/2022.
//

#include "MyStdLib.h"
#include "Lista.h"
int MyStdLib::strToInt(std::string str) {
    int number = 0;
    int iterator = 0;

    while (str[iterator] != '\0') {

        if (str[iterator] < 48 || str[iterator] > 57) {
            printf("No se permiten caracteres distintos a un numero" "\n");
            break;
        } else {

            number = number * 10 + (str[iterator] - 48);
            iterator++;
        }
    }
    return number;
}

std::string MyStdLib::intToString(int num) {
    std::string number;
    int iterator = 0;
    number = std::to_string(num);
/*
    while (str[iterator] != '\0') {

        if (str[iterator] < 48 || str[iterator] > 57) {
            printf("No se permiten caracteres distintos a un numero" "\n");
            break;
        } else {
            number = number * 10 + (str[iterator] - 48);
            iterator++;
        }
    }*/
    return number;
}
//string "123456789877"

std::string MyStdLib::invertirCadena(std::string cadena) {
    auto tam= (float)cadena.size();
    std::string aux;
    int pos = 0;
    int n = 4;
    int  prueba = (int)((tam / 4 )+ 0.26);
    for(int i = 0; i < (int)((tam / 4 )+ 0.26); i++){
        if(n >= (int)tam){
            n = (int)tam;
        }
        if(pos > (int)tam){
            break;
        } else{
            aux += cadena.substr(pos, 4);
        }
        pos+=4;
        n+=4;

    }
    cadena.clear();

    auto tam2 = (float)aux.size();
    int pos2 = (int)tam2-4;
    int n2 = (int)tam2;
    int size = (int)((tam2 / 4 )+ 0.26);
    for(int i = 0; i < size; i++){
        cadena += aux.substr(pos2, n2);
        aux.erase(pos2, n2);
        if(pos2 > 0){
            pos2-=4;
        }
        if(n2 > 0){
            n2-=4;
        }

    }

    return cadena;
}

std::string MyStdLib::invertirCadenaFinal(std::string cadena) {
    string ss = cadena;

    auto* list = new Lista<string>;
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
            auto *val = new string ();
            *val = newString;
            list->insertar(val);
            val = new string ();
            newString.clear();
            i = 0;
        }
    };

cadena.clear();
    for(i = list->getCantidad()-2; i >= 0 ; i--){
        cadena += *list->buscarElemento(i);
    }


    return cadena;
}
