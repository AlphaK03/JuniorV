//
// Created by keylo on 18/9/2022.
//

#ifndef JUNIORV_RUNTIMEEXCEPTION_H
#define JUNIORV_RUNTIMEEXCEPTION_H



using namespace std;

class RuntimeExcetion{
private:
    string errorMsg;
public:
    RuntimeExcetion(const string& err){
        errorMsg=err;}

    string getMenssage()const {
        return errorMsg;
    }

};

class StackEmpty:public RuntimeExcetion{
public:
    StackEmpty(const string &err): RuntimeExcetion(err){

    }
};


#endif //JUNIORV_RUNTIMEEXCEPTION_H
