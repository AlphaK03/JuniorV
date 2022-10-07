//
// Created by keylo on 14/9/2022.
//

#include "Integer.h"

#include <utility>


bool Integer::operator==(const Integer &rhs) const {
    return integerChars == rhs.integerChars;
}

bool Integer::operator!=(const Integer &rhs) const {
    return !(rhs == *this);
}

bool Integer::operator<(const Integer &rhs) const {
    return integerChars < rhs.integerChars;
}

bool Integer::operator>(const Integer &rhs) const {
    return rhs < *this;
}

bool Integer::operator<=(const Integer &rhs) const {
    return !(rhs < *this);
}

bool Integer::operator>=(const Integer &rhs) const {
    return !(*this < rhs);
}



Integer::Integer(string ss){
    this->integerChars.clear();
    this->integerChars = std::move(ss);
  /*  int iterator = 0;
    string newString;
    int  i = 0;

    this->integerChars = ss;

    while (ss[iterator] != '\0'){
        newString += ss[iterator];

        iterator++;
        i++;
        if(i == 4 || ss[iterator] == '\0'){
            int *val = new int ();
            *val = MyStdLib::strToInt(newString);
            value->insertar(val);
            val = new int();
            newString.clear();
            i = 0;
        }
    };*/
}

Integer &operator+(Integer &a, const Integer &b) {
    a += b;
    return a;
}

int Integer::length(Integer a) {
    int iterator = 0;
    for(auto charElement : a.integerChars){
        iterator++;
    }
    return iterator;
}

Integer &operator+=(Integer &a, const Integer &b) {

  /*  int sizeA = a.length(a);
    int sizeB = b.length(b);
    if (sizeB > sizeA){
        a.integerChars.append(sizeB - sizeA, 0);
        sizeA = a.length(a);
    }
*/
  /*int s = 0;
    s = (MyStdLib::strToInt(a.integerChars) + MyStdLib::strToInt(b.integerChars));
    a.integerChars = MyStdLib::intToString(s);*/

    string ss = a.integerChars;
    string ss2 = b.integerChars;

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
    auto *finalTotal = new Lista<string>();
    auto *resultado = new string();
    bool lleva = false;
    int total = 0;

    string numeroSumado;
    int iteradorWhile = 0;
    int  i2 = 0;
    while (i2 <= (list->getCantidad())){
        while (list->buscarElemento(i2 ) != nullptr){
            if(lleva){
                total = ((*list->buscarElemento(i2)) + *list2->buscarElemento(i2)) + 1;
            } else{
                total = *list->buscarElemento(i2) + *list2->buscarElemento(i2);
            }


        if(total > 9999){
            lleva = true;
            numeroSumado = MyStdLib::intToString(total).substr(1, 4);
            *resultado += numeroSumado;
            finalTotal->insertar(resultado);
        } else{
            lleva = false;
            numeroSumado = MyStdLib::intToString(total);
            *resultado += numeroSumado;
            finalTotal->insertar(resultado);
        }
        i2++;
    }
    }
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

    a.integerChars.clear();


    a.integerChars = *resultado;
    if(a.integerChars[0] == '0'){
        a.integerChars = "1" + a.integerChars;
    }

    return a;
}

ostream &operator<<(ostream &out, const Integer &a) {
    /**/
    string charString;
    for (int i = 0; a.integerChars[i] != '\0'; i++){
        charString.push_back(a.integerChars[i]);
    }
    out << charString;
    return out;
}

Integer &Integer::operator=(const Integer &b){
    if(this != &b){
        this->integerChars = b.integerChars;
    }
    return *this;
};


istream &operator>>(istream &in, Integer&a) {
    string s;
    in >> s;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) {
        if (!isdigit(s[i]))
            throw runtime_error("INVALID NUMBER");
        a.integerChars[n - i - 1] = s[i];
    }
    return in;
}

Integer &operator+=(Integer &a, const char *&b) {
    int s = 0;
    MyStdLib myStdLib;
    Integer temp(b);

    s = (MyStdLib::strToInt(a.integerChars) + MyStdLib::strToInt(temp.integerChars));
    a.integerChars = MyStdLib::intToString(s);
    return a;
}


Lista<int> *Integer::getValue() const {
    return value;
}

void Integer::setValue(int *value) {
    this->value->insertar(value);
}

Integer::Integer(string integerChars, Lista<int> *value) : integerChars(std::move(integerChars)), value(value) {}

const string &Integer::getIntegerChars() const {
    return integerChars;
}

void Integer::setIntegerChars(const string &integerChars) {
    Integer::integerChars = integerChars;
}

Integer &operator*(Integer &a, const Integer &b) {
    a *= b;
    return a;
}

Integer &operator*=(Integer &a, const Integer &b) {
    int s = 0;
    MyStdLib myStdLib;
    Integer temp(b);

    s = (MyStdLib::strToInt(a.integerChars) * MyStdLib::strToInt(temp.integerChars));
    a.integerChars = MyStdLib::intToString(s);
    return a;
}

Integer &operator-(Integer &a, const Integer &b) {
    a -= b;
    return a;
}

Integer &operator-=(Integer &a, const Integer &b) {
    int s = 0;
    MyStdLib myStdLib;
    Integer temp(b);

    s = (MyStdLib::strToInt(a.integerChars) - MyStdLib::strToInt(temp.integerChars));
    a.integerChars = MyStdLib::intToString(s);
    return a;
}

Integer &operator/(Integer &a, const Integer &b) {
    if(b.integerChars.size() == 1 && b.integerChars[0] == '0'){
        throw runtime_error("Division entre 0");
    }
    a /= b;
    return a;
}

Integer &operator/=(Integer &a, const Integer &b) {
    int s = 0;
    MyStdLib myStdLib;
    Integer temp(b);

    s = (MyStdLib::strToInt(a.integerChars) / MyStdLib::strToInt(temp.integerChars));
    a.integerChars = MyStdLib::intToString(s);
    return a;
}

Integer::Integer() = default;


Integer::~Integer() = default;


