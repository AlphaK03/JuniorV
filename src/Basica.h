//
// Created by keylo on 31/8/2022.
//

#ifndef JUNIORV_BASICA_H
#define JUNIORV_BASICA_H

class Basica {
private:
    int a{};

public:
    Basica();
    explicit Basica(int a);

    void calcular(int*, int , int);
    static void modificar (int*, int*);

    int getA() const;
    void setA(int a);

    virtual ~Basica();
};


#endif //JUNIORV_BASICA_H
