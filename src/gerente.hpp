#include<iostream>
#include<string>
#include "pessoa.hpp" 

using namespace std;

#ifndef _GERENTE_HPP_
#define _GERENTE_HPP_

class gerente : public pessoa {
private:
    string matricula_;
    float salario_;
public:
    //constructor gerente:
    gerente(string nome, string cpf, string tel, string matricula, float salario) : pessoa{nome, cpf, tel}, matricula_{matricula}, salario_{1.200} {};
    //function of obj:
    string showMatricula() {};
    float showSalario() {};
};

#endif