#include <fstream>
#include <string>
#include "pratos.hpp"
#include "funcionarios.hpp"
#include "gerente.hpp"
#include "garcon.hpp"

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

	//variaveis aux:
	string aux;
	int i;
	
	while(ger.good())
	{
		getline(ger, aux , ',')
		{
			//não sei como fazer pra mandar pro constructor;
		}
	}
		

}


Restaurante::InitGarcon(ifstream garcon){
	//definir o q acontece aq
}

Restaurante::InitPratos(iftream pratos)
{
	//definir o que acontece aq

};