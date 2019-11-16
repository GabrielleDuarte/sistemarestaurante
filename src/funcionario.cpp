#include <iostream>
#include <string>
#include "funcionario.hpp"

using namespace std;

Funcionario::Funcionario(string nome, string id, float salario){
		this->nome = nome;
		this->id = id;
		this->salario = salario;
}
string Funcionario::getNome(){
	return nome;
}
string Funcionario::getId(){
	return id;
}
float Funcionario::getSalario(){
	return salario;
}

void Funcionario::setNome(string nome_funcionario) 
{
	nome = nome_funcionario;
}

void Funcionario::setId(string id_funcionario)
{ 
	id = id_funcionario;
}

void Funcionario::setSalario(float salario_funcionario) 
{
	salario=salario_funcionario; 
}





