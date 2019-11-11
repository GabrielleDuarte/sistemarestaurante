#include <iostream>
#include <string>
#include "funcionario.hpp"

using namespace std;

Funcionario::Funcionario(string nome, string id){
		this->nome = nome;
		this->id = id;
}

string Funcionario::Rnome() { return this->nome; }

string Funcionario::Rid() { return this->id; }