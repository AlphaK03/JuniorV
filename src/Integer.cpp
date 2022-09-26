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



Integer::Integer(string integerChars) : integerChars(move(integerChars)) {}

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
    int s = 0;
  /*  int sizeA = a.length(a);
    int sizeB = b.length(b);
    if (sizeB > sizeA){
        a.integerChars.append(sizeB - sizeA, 0);
        sizeA = a.length(a);
    }
*/
    s = (MyStdLib::strToInt(a.integerChars) + MyStdLib::strToInt(b.integerChars));
    a.integerChars = MyStdLib::intToString(s);
    return a;
}

ostream &operator<<(ostream &out, const Integer &a) {
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
            throw ("INVALID NUMBER");
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

Integer &Integer::operator*(const Integer &b) {
    *this = b;
    return *this;
}

Integer::Integer() = default;

Integer::~Integer() = default;


