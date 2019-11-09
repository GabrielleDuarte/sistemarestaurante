#include<iostream>

using namespace std;

#ifndef _PESSOA_HPP_
#define _PESSOA_HPP_

class pessoa
{
private:
    string nome_;
    string cpf_;
    string tel_;

public:
    //constructor of pessoa:
    pessoa(string nome, string cpf, string tel) : nome_{nome}, cpf_{cpf}, tel_{tel} {}

    //function of pessoa:
    string showNome() {};
    string showCpf() {};
    string showTel() {};
};

#endif