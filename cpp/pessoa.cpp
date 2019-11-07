#include<iostream>
#include "../hpps/pessoa.hpp"

using namespace std;

pessoa::pessoa(string nome_, string cpf_, string tel_) 
{
    nome= nome_;
    cpf = cpf_;
    tel = tel_;

}

string getNome()
{
    return nome;
}
 string getCpf()
{
    return cpf;
}
 string getTel()
{
    return tel;
}