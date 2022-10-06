//
// Created by keylo on 14/9/2022.
//

#ifndef JUNIORV_INTEGER_H
#define JUNIORV_INTEGER_H
#include "iostream"
#include "MyStdLib.h"
#include "Lista.h"

using namespace std;
class Integer {
private:
    string integerChars{};
    Lista<int>* value{};
public:
    Integer();

    Integer(string integerChars, Lista<int> *value);

    explicit Integer(string integerChars);

    bool operator==(const Integer &rhs) const;

    bool operator!=(const Integer &rhs) const;

    bool operator<(const Integer &rhs) const;

    bool operator>(const Integer &rhs) const;

    bool operator<=(const Integer &rhs) const;

    bool operator>=(const Integer &rhs) const;
    friend Integer& operator+(Integer &a, const Integer &b);
    friend Integer& operator+=(Integer &a, const Integer &b);
    friend Integer& operator+=(Integer &a, const char* &b);

    friend ostream &operator<<(ostream &, const Integer &);
    friend istream &operator>>(istream &, Integer &);


    Integer &operator=(const Integer &b);

    friend Integer& operator*(Integer &a, const Integer &b);
    friend Integer& operator*=(Integer &a, const Integer &b);

    friend Integer& operator-(Integer &a, const Integer &b);
    friend Integer& operator-=(Integer &a, const Integer &b);

    friend Integer& operator/(Integer &a, const Integer &b);
    friend Integer& operator/=(Integer &a, const Integer &b);

    static int length(Integer);
    virtual ~Integer();

    Lista<int> *getValue() const;

    void setValue(int *value);

    const string &getIntegerChars() const;

    void setIntegerChars(const string &integerChars);
};


#endif //JUNIORV_INTEGER_H
