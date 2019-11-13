#ifndef _RESTAURANTE_H
#define _RESTAURANTE_H

//atualizar o cpp de restaurante

#include <fstream>
#include <string>
#include<vector>
#include "pratos.hpp"
#include "funcionario.hpp"
#include "gerente.hpp"
#include "garcon.hpp"
#include "historico.hpp"
#include "mesa.hpp"

//ainda vou criar -> #include "historico.hpp"

class Restaurante /*Public historico*/{
private:
	string nome_restaurante;
	Gerente gerente;
	vector <Garcon> garcons;
	vector <Pratos> pratos;
	vector <Mesa> mesa;
public:
	Restaurante(string nomedorestaurante, string nome_gerente, string id_gerente);
	//não precisa delcarar destrutores.
	// funções de inicialização de funcionario, pratos e historico de vendas diario
	void InitGerente(ifstream gerente);
	void InitGarcon(ifstream garcon);	
	void InitPratos(ifstream pratos);
	//void InitPedido();
	//void InitMesa();
	//void InitHistorico(ifstream historico);
	
	//função que retorna o nome do restaurante:
	string Rnomer();

};


#endif