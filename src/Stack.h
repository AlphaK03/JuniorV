//
// Created by keylo on 18/9/2022.
//

#ifndef JUNIORV_STACK_H
#define JUNIORV_STACK_H
#include "iostream"
#include "RunTimeException.h"
#include "List.h"
template <class T>

class Stack {
private:
    List<T> *S;
    int n;
public:
    Stack();
    ~Stack();
    int size();
    bool empty()const;
    T *top() noexcept(false);
    void push(T *e);
    void pop() noexcept(false);

};


#endif //JUNIORV_STACK_H
