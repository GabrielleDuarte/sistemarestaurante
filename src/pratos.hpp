#ifndef _PRATOS_H
#define _PRATOS_H

#include <iostream>
#include <string>
#include <list>
#include <fstream>

using namespace std;

class Pratos{
private:
	string nome_prato;
	string valor_prato;
	int qnt_vendida;

public:
	///construtor e desconstrutor:
	Pratos();
	Pratos(string nome_prato, string valor_prato, int qnt_vendida);

	//adicionar novo prato -> GERENTE FAZ
	//retirar prato -> GERENTE FAZ TBM 
	//passar para o arq de historico
}; 


/*funções a se usar da biblioteca list, inicializa lista de pratos list<pratos>*/
#endif