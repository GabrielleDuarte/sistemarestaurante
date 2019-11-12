#include <iostream>
#include <string>
#include "gerente.hpp"

Gerente::Gerente(string nome, string id, float salario): Funcionario{nome, id} {
	this->salario = 1,200;
};

string Gerente::Rsalariog(){
	return salario;
};