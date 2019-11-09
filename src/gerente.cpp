#include<iostream>
#include<string>
#include "gerente.hpp"
#include "pessoa.hpp" 


using namespace std;

class gerente: public pessoa {
private:
    string matricula_;
    float salario_;
public:
    //constructor of gerente:
    gerente(string nome, string cpf, string tel, string matricula, float salario) : pessoa{nome, cpf, tel}, matricula_{matricula}, salario_{1.200} {};

    //function of gerente
    string showMatricula() {};
    float showSalario() {};
};

gerente::showMatricula()
{
    return matricula_;
}

gerente::showSalario()
{
    return salario_;
}
 