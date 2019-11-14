#include <iostream>
#include <string>
#include "funcionario.hpp"

using namespace std;

Funcionario::Funcionario(string nome, string id, float salario){
		this->nome = nome;
		this->id = id;
		this->salario = salario;
}

void Funcionario::setNome(string nome_funcionario) 
{
	nome = nome_funcionario;
}

void Funcionario::setId(string id)
{ 
	this->id = id;
}

void Funcionario::setSalario(float salario) 
{
	this->salario=salario; 
}



