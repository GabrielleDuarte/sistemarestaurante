#ifndef _GERENTE_H
#define _GERENTE_H

#include <iostream>
#include <string>
#include "funcionario.hpp"

using namespace std;

class Gerente : public Funcionario{
private:
	float salario;
public:
	//construtor e destrutor:
	Gerente(string nome, string id, float salario);

	//fuction of class Gerente:
	float Rsalariog();
};



#endif