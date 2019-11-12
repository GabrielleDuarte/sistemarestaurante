#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "pratos.hpp"
#include "funcionarios.hpp"
#include "gerente.hpp"
#include "garcon.hpp"
#include "mesa.hpp"
#include "pedido.hpp"
#include "restaurante.hpp"

using namespace std;

Restaurante::Restaurante(){
	this->nomedorestaurante = nomedorestaurante;
}

Restaurante::InitGerente(ifstream ger){
	//abrindo o arquivo de funcionarios:
	ger.open("gerente.csv");
	//testando a abertura do arquivo:
	if ( !ger.is_open() )
	{
		cout << "Erro na abertura do arquivo.\n";
		exit(1);
	}

	//vector to salve ger in containers:
	vector<string> gerentes;

	while(ger.good())
	{
		string aux;
		getline(ger, aux , ',');
		ger.push_back(aux);
	}	
}


Restaurante::InitGarcon(ifstream garcon){
	garcon.open("gerente.csv");
	//testando a abertura do arquivo:
	if ( !garcon.is_open() )
	{
		cout << "Erro na abertura do arquivo.\n";
		exit(1);
	}

	//vector to salve ger in containers:
	vector<string> garcon;

	while(garcon.good())
	{
		string aux;
		getline(ger, aux , ',');
		garcon.push_back(aux);
	}	

};	

Restaurante::InitPratos(iftream pratos)
{
	pratos.open("gerente.csv");
	//testando a abertura do arquivo:
	if ( !pratos.is_open() )
	{
		cout << "Erro na abertura do arquivo.\n";
		exit(1);
	}

	//vector to salve ger in containers:
	vector<string> pratos;

	while(pratos.good())
	{
		string aux;
		getline(ger, aux , ',');
		pratos.push_back(aux);
	}	
};

Restaurante::InitMesa(/*assinatura aqui tbm*/){
	Vector<Mesa> ativas;



};

Restaurante::InitPedido(/*assinatura aqui tbm*/){
	
};

Restaurante::InitHistorico(ofstream historico_do_dia, vector<Pedido> pedidos){
	
};