#ifndef _GERENTE_H
#define _GERENTE_H

#include <iostream>
#include <string>
#include "funcionario.hpp"

using namespace std;

class Gerente : public Funcionario{
private:
	string salario;
public:
	//construtor e destrutor:
	Gerente(string nome, string id, string salario);

	//fuction of class Gerente:
	string Rsalariog();
};



#endif