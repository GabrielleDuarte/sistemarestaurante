#include<iostream>
#include "../hpps/gerente.hpp"

using namespace std;

gerente::gerente(string matricula_, float salario) 
{
    matricula = matricula_;
    salario = salario_;
}

string getMatricula()
{
    return matricula;
}
 float getSalario()
{
    return salario;
}
 