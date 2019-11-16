#ifndef _GARCON_H
#define _GARCON_H

#include <iostream>
#include <string>
#include "funcionario.hpp"

using namespace std;

class Garcon : public Funcionario{
public:
	Garcon();
	Garcon(string nome, string id, float salario_garcon);

	///function of class Garcon
	void IniMesa(int NdeMesa);
	
};
#endif