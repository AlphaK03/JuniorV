//
// Created by keylo on 18/9/2022.
//

#include "Stack.h"
template <class T>
Stack<T>::Stack() :S(new List<T>), n(0){
    //S= new List<T>;
}

template<class T>
int Stack<T>::size(){
    return n;
}

template<class T>
bool Stack<T>::empty() const {
    return n==0;
}

template<class T>
void Stack<T>::push(T *e) {
    ++n;
    S->agregarInicio(e);
}

template <class T>
T *Stack<T>::top() noexcept(false) {
    if(empty())
        throw StackEmpty("Top sobre un stack vacio");
    return S->inicio();
}

template <class T>
void Stack<T>::pop() noexcept(false) {
    if (empty())
        throw StackEmpty("Top sobre un stack vacio");
    S->borraInicio();
    n--;
}

template <class T>
Stack<T>::~Stack<T>() {
    delete S;
}
