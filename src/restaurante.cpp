#include "restaurante.hpp"

using namespace std;

Restaurante::InitGerente(ifstream ger){
	//abrindo o arquivo de funcionarios:
	ger.open("gerente.txt");
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
	//definir o que acontece aq

};

Restaurante::InitMesa(/*assinatura aqui tbm*/){
	Vector<Mesa> ativas;



};

Restaurante::InitPedido(/*assinatura aqui tbm*/){
	
};

Restaurante::InitHistorico(ofstream historico_do_dia, vector<Pedido> pedidos){
	
};