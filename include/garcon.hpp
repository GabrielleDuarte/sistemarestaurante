#ifndef _GARCON_H
#define _GARCON_H

#include <iostream>
#include <string>
#include "funcionario.hpp"

using namespace std;

class Garcon : public Funcionario{
private:
	string salariog = "900,00"
public:
	Garcon(string nome, string id, string salario);

	//function of class Garcon
	string Rsalariogar();
	void IniMesa(int NdeMesa);

	
}