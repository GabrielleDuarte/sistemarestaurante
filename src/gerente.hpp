#ifndef _GERENTE_H
#define _GERENTE_H

#include <iostream>
#include <string>
#include "funcionario.hpp"

using namespace std;

class Gerente: public Funcionario{
public:
	Gerente();
	Gerente(string nome, string id, float salario);
	//Gerente(string nome, string id, string salario);
	//fuction of class Gerente:
	
};
#endif