#include "restaurante.hpp"

using namespace std;

Restaurante::Restaurante(string nome_restaurante_, int quantidade_mesa_):nome_restaurante(nome_restaurante_), quantidade_mesa(quantidade_mesa_){}

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
	
	string aux_nome, aux_id, aux_salario;
	float float_aux ;

	while(gerenteData.good())
	{
		getline(gerenteData, aux_nome , ',');
		getline(gerenteData, aux_id , ',');
		getline(gerenteData, aux_salario , ',');
		gerenteData>>aux_nome,aux_id, aux_salario; //TEM QUE SE REPETIR 3 VEZES???
		//gerente.push_back(aux);
		float float_aux = stof(aux_salario);
		// O FLUXO ESTÁ CORRETO??? FALTA CONSTRUIR O OBJETO
	}	
	Gerente gerente_restaurante(aux_nome, aux_id,float_aux );	
}

	
void Restaurante::InitGarcon(string garconFile){

	ifstream garconData{garconFile};
	//testando a abertura do arquivo:
	if ( !garconData.is_open() )
	{
		cout << "Erro na abertura do arquivo.\n";
		exit(1);
	}

	//vector to salve ger in containers:
	vector<Garcon> garcons_restaurante;
	
	string aux_nome, aux_id, aux_salario;
	 
	while(garconData.good())
	{
		getline(garconData, aux_nome , ',');
		getline(garconData, aux_id , ',');
		getline(garconData, aux_salario , ',');

		garconData>>aux_nome,aux_id, aux_salario; 
	
		Garcon newGarcon(aux_nome, aux_id, stof(aux_salario));
		garcons_restaurante.push_back(newGarcon);
	}	
}

 void Restaurante::InitPratos(string pratoFile)
{
	ifstream pratoData{pratoFile};
	vector<Pratos> pratos_restaurante;
	string aux_nome_prato, aux_valor_prato, aux_qnt_vendida;
	

	if (!pratoData.is_open() )
	{
		cout << "Erro na abertura do arquivo.\n";
		exit(1);
	}

	while(pratoData.good())
	{
		getline(pratoData, aux_nome_prato , ',');
		getline(pratoData, aux_valor_prato , ',');
		getline(pratoData, aux_qnt_vendida , ',');

		pratoData>>aux_nome_prato,aux_valor_prato, aux_qnt_vendida; 
	
		Pratos newPrato(aux_nome_prato,aux_valor_prato, stoi(aux_qnt_vendida));
		pratos_restaurante.push_back(newPrato);
	}	
}


	
// 	string aux_nome, aux_id, aux_salario;
	 
// 	while(garconData.good())
// 	{
// 		getline(garconData, aux_nome , ',');
// 		getline(garconData, aux_id , ',');
// 		getline(garconData, aux_salario , ',');

// 		garconData>>aux_nome,aux_id, aux_salario; 
	
// 		Garcon newGarcon(aux_nome, aux_id, stof(aux_salario));
// 		garcons_restaurante.push_back(newGarcon);
// 	}	
// }








// 	//definir o que acontece aq
// 		pratoFile.open("prato.txt");
// 	//testando a abertura do arquivo:
// 	if ( !pratoFile.is_open() )
// 	{
// 		cout << "Erro na abertura do arquivo.\n";
// 		exit(1);
// 	}

// 	//vector to salve ger in containers:
// 	vector<string> pratos;

// 	while(pratoFile.good())
// 	{
// 		getline(gerenteData, aux_nome , ',');
// 		getline(gerenteData, aux_id , ',');
// 		getline(gerenteData, aux_salario , ',');
// 		garconData>>aux_nome,aux_id, aux_salario;
// 	}	

// }

// void Restaurante::InitMesa(ifstream mesa){
//  	vector<Mesa> ativas;
// }

// // // void Restaurante::InitPedido(/*assinatura aqui tbm*/){
	
// // // };

// // //void Restaurante::InitHistorico(ofstream historico_do_dia, vector<Pedido> pedidos){
	
// // };