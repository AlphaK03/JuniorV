//
// Created by keylo on 14/9/2022.
//

#ifndef JUNIORV_INTEGER_H
#define JUNIORV_INTEGER_H
#include "iostream"
#include "MyStdLib.h"

using namespace std;
class Integer {
private:
    string integerChars;
public:

    explicit Integer(string integerChars);

    Integer();

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

    Integer &operator*(const Integer &b);

    static int length(Integer);
    virtual ~Integer();
};


#endif //JUNIORV_INTEGER_H
