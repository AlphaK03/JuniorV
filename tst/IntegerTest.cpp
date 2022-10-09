//
// Created by keylo on 8/10/2022.
//
#include "gtest/gtest.h"
#include "Integer.h"

TEST(ReportTestSuite, VehicleManagerReportTest){

    //SUMA
    Integer num1("12345654321234567898765432123456789987654322345011");
    Integer num2("512345664321234565456754345677654345678906");
    Integer resultado(num1 + num2);
    EXPECT_EQ(resultado.getIntegerChars(), "12345654833580232219999997580211135665308668023917");

    //RESTA
    num1.setIntegerChars("100000200000000342588910898");
    num2.setIntegerChars("100000200000000342588910887");
    resultado = num1 - num2;

    EXPECT_EQ(resultado.getIntegerChars(), "000000000000000000000000011");

    //MULTIPLICACIÓN
    num1.setIntegerChars("100000000000000000000000000000021");
    num2.setIntegerChars("5");
    resultado = num1 * num2;

    EXPECT_EQ(resultado.getIntegerChars(), "500000000000000000000000000000105");



    //IGUALDADES

    EXPECT_EQ(num1 == num1, true);

    EXPECT_EQ((num1 < num2), false);

    EXPECT_EQ((num1 > num2), true);

    EXPECT_EQ((num1 != num2), true);



    //FACTORIAL
    //"Si llega a 1000 pero tarda muchisimo tiempo!!! " << endl;
    Integer num("100");

    Integer resultadoFactorial;
    resultadoFactorial = num.factorial(num);

    EXPECT_EQ(resultadoFactorial.getIntegerChars(), "933262154439441526816992388562667004907159682643816214685929638952175999932299156089414639761565182862536979208272237582511852109168640000000000000000000000");


    //SUCESIÓN FIBONACCI
    num.setIntegerChars("1000");
    Integer resultadoFibonacci;
    resultadoFibonacci = num.fibonacciIterative(num);

    EXPECT_EQ(resultadoFibonacci.getIntegerChars(), "43466557686937456435688527675040625802564660517371780402481729089536555417949051890403879840079255169295922593080322634775209689623239873322471161642996440906533187938298969649928516003704476137795166849228875");


}
