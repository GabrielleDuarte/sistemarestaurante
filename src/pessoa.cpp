#include<iostream>
#include<string>
#include "pessoa.hpp"

using namespace std;

class pessoa 
{
private:
    string nome_;
    string cpf_;
    string tel_;
public:
    //constructor of pessoa:
    pessoa(string nome, string cpf, string tel) : nome_{nome}, cpf_{cpf}, tel_{tel} {};

    //function of pessoa:
    string showNome() {};
    string showCpf() {};
    string showTel() {};

};

pessoa::showNome()
{
    return nome;
}
pessoa::showCpf()
{
    return cpf;
}
pessoa::showTel()
{
    return tel;
}