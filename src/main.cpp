// #include "funcionario.hpp"
#include "gerente.hpp"
#include "restaurante.hpp"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	string nome_restaurante;
	int quantidade_mesas;
	string gerenteFile,garconFile, pratoFile;

	cout << "Insira o nome do restaurante" << endl;
	cin >> nome_restaurante;
	cout << "Insira o número de mesas contidas no restaurante "<< nome_restaurante << endl;
	cin >> quantidade_mesas;

	Restaurante R(nome_restaurante, quantidade_mesas);

	cout << "Insira o arquivo com os dados do Gerente do restaurante "<< nome_restaurante << endl;
	getline(cin,gerenteFile);
	///gerenteFile É O NOME DE UM ARQUIVO
	// R.InitGerente(gerenteFile);

	cout << "Insira o arquivo com os dados dos garçons do Restaurante "<< nome_restaurante << endl;
	getline(cin,garconFile);
	// R.InitGerente(garconFile);

	cout << "Insira o arquivo com os dados dos pratos do Restaurante "<< nome_restaurante << endl;
	getline(cin,pratoFile);
	R.InitPratos(pratoFile);

	
}