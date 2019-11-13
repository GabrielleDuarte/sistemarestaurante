#include <iostream>
#include <string>
#include "funcionario.hpp"

using namespace std;

Funcionario::Funcionario(string nome, string id, float salario){
		this->nome = nome;
		this->id = id;
		this->salario = salario;
}

string Funcionario::getNome() { return this->nome; }

string Funcionario::getId() { return this->id; }

float Funcionario::getSalario() { return this->salario; }