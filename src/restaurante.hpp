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
	int quantidade_mesa;
public:
	Restaurante();
	Restaurante(string nome_restaurante, int quantidade_mesa);
	//não precisa delcarar destrutores.
	// funções de inicialização de funcionario, pratos e historico de vendas diario
	void InitGerente(string gerenteFile);
	void InitGarcon(string garconFile);	
	void InitPratos(string pratoFile);
	//void InitPedido(ifstream pedidoFile);
	// void InitMesa(ifstream mesaFile);
	// void InitHistorico(ifstream historico);
	
	//função que retorna o nome do restaurante:
	string Rnomer();

};


#endif