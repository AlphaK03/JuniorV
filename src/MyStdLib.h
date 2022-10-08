//
// Created by keylo on 18/9/2022.
//

#ifndef JUNIORV_MYSTDLIB_H
#define JUNIORV_MYSTDLIB_H
#include "iostream"
#include "Lista.h"

using namespace std;
class MyStdLib {
public:
    static int strToInt(std::string str);
    static std::string intToString(int num);
    static std::string invertirCadena(std::string ss);
    static std::string invertirCadenaFinal(std::string ss);
    static Lista<int>* strToList(string ss);
    static string* resultadoFinal(Lista<int>*, Lista<int>*);
    static string* resultadoFinalResta(Lista<int>*, Lista<int>*);

};


#endif //JUNIORV_MYSTDLIB_H
