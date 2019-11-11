#ifndef _FUNCIONARIO_H
#define _FUNCIONARIO_H

#include <iostream>
#include <string>

using namespace std;

class Funcionario{
private:
	string nome;
	string id;
public:
	Funcionario(string nome, string id);
	string Rnome();
	string Rid();
};

#endif