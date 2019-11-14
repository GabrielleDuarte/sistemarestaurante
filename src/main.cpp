#include "funcionario.hpp"
#include "gerente.hpp"
#include "restaurante.hpp"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	string nome_restaurante;
	string gerenteFile;

	cout << "Insira o nome do restaurante" << endl;
	cin >> nome_restaurante;
	Restaurante R(nome_restaurante);

	cout << "Insira o arquivo com os dados do Gerente do restaurante "<< nome_restaurante << endl;
	getline(cin,gerenteFile);
	///gerenteFile É O NOME DE UM ARQUIVO
	R.InitGerente(gerenteFile);

	
}