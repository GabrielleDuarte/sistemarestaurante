#include "restaurante.hpp"

using namespace std;

Restaurante::Restaurante(string nome_restaurante)
{
	this->nome_restaurante=nome_restaurante;
}

void InitGerente(string gerenteFile){
	//abrindo o arquivo de funcionarios:
	ifstream gerenteData{gerenteFile};
	// gerenteData.open(gerenteFile);
	//testando a abertura do arquivo:
	if ( !gerenteData.is_open() )
	{
		cout << "Erro na abertura do arquivo.\n";
		exit(1);
	}

	//vector to salve ger in containers:
	
	 string aux_nome, aux_id, aux_salario;

	while(gerenteData.good())
	{
		getline(gerenteData, aux_nome , ',');
		getline(gerenteData, aux_id , ',');
		getline(gerenteData, aux_salario , ',');
		gerenteData>>aux_nome,aux_id, aux_salario;
		//gerente.push_back(aux);
		// O FLUXO ESTÁ CORRETO??? FALTA CONSTRUIR O OBJETO
	}	
	Gerente gerente_restaurante(aux_nome,aux_id,stof(aux_salario));	
}


// void Restaurante::InitGerente(ifstream gerenteFile){
// 	//abrindo o arquivo de funcionarios:
// 	gerenteFile.open("gerente.txt");
// 	//testando a abertura do arquivo:
// 	if ( !gerenteFile.is_open() )
// 	{
// 		cout << "Erro na abertura do arquivo.\n";
// 		exit(1);
// 	}

// 	//vector to salve ger in containers:
// 	vector<string> gerente;
	 
// 	while(gerenteFile.good())
// 	{
// 		string aux;
// 		getline(gerenteFile, aux , ',');
// 		gerenteFile>>aux;
// 		gerente.push_back(aux);
// 		// O FLUXO ESTÁ CORRETO??? FALTA CONSTRUIR O OBJETO
// 	}	
// 	Gerente gerente_restaurante(gerente[0], gerente[1],stof (gerente[2]));	
// }


void Restaurante::InitGarcon(ifstream garconFile){
	garconFile.open("garcon.txt");
	//testando a abertura do arquivo:
	if ( !garconFile.is_open() )
	{
		cout << "Erro na abertura do arquivo.\n";
		exit(1);
	}

	//vector to salve ger in containers:
	vector<string> garcons;

	while(garconFile.good())
	{
		string aux;
		getline(garconFile, aux , ',');
		garconFile>>aux;
		garcons.push_back(aux);
	}
	vector<Garcon> garcons_restaurante; 
	for(auto i = garcons.begin(); i != garcons.end(); ++i)
	{
		garcons_restaurante.set //???????
	}
// vetor populado...


}

void Restaurante::InitPratos(ifstream pratoFile)
{
	//definir o que acontece aq
		pratoFile.open("prato.txt");
	//testando a abertura do arquivo:
	if ( !pratoFile.is_open() )
	{
		cout << "Erro na abertura do arquivo.\n";
		exit(1);
	}

	//vector to salve ger in containers:
	vector<string> pratos;

	while(pratoFile.good())
	{
		string aux;
		getline(pratoFile, aux , ',');
		pratoFile>>aux;
		pratos.push_back(aux);
	}	

}

void Restaurante::InitMesa(ifstream mesa){
 	vector<Mesa> ativas;
};

// // void Restaurante::InitPedido(/*assinatura aqui tbm*/){
	
// // };

// //void Restaurante::InitHistorico(ofstream historico_do_dia, vector<Pedido> pedidos){
	
// };