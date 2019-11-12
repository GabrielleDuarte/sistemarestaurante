#ifndef _RESTAURANTE_H
#define _RESTAURANTE_H

//atualizar o cpp de restaurante

#include <fstream>
#include <string>
#include "pratos.hpp"
#include "funcionarios.hpp"
#include "gerente.hpp"
#include "garcon.hpp"

//ainda vou criar -> #include "historico.hpp"

class Restaurante : public Funcionarios , public Pratos /*Public historico*/{
private:
	string nomedorestaurante;
public:
	Restaurante(string nomedorestaurante);
	//não precisa delcarar destrutores.

	// funções de inicialização de funcionario, pratos e historico de vendas diario
	void InitGerente(ifstream gerente);
	void InitGarcon(ifstream garcon);	
	void InitPratos(iftream pratos);
	//void InitPedido();
	//void InitMesa();
	//void InitHistorico(ifstream historico);
	
	//função que retorna o nome do restaurante:
	string Rnomer();

};


#endif