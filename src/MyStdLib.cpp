//
// Created by keylo on 18/9/2022.
//

#include "MyStdLib.h"
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
