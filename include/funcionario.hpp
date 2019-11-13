#ifndef _FUNCIONARIO_H
#define _FUNCIONARIO_H

#include <iostream>
#include <string>

using namespace std;

class Funcionario{
private:
	string nome;
	string id;
	float salario;
public:
	Funcionario(string nome, string id, float salario);
	string getNome();
	string getId();
	float getSalario();
};

#endif