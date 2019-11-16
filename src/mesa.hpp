#ifndef _MESA_H
#define _MESA_H

#include<iostream>
#include<string>
#include<vector>
//#include<>

//mesa inicializa pedido e envia pra ele os pedidos feitos 
//mesa tbm envia todos os pedidos para historico para que ele registrar quando os mesmos forem finalizados
using namespace std;

class Mesa{
private:
	string idMesa;
	//vector <Pedido> pedido_mesa;

public:
	//constructor do objeto Mesa:
	Mesa();
	Mesa(string idMesa);


	//funções do objeto Mesa:
	void IniPedido();



};


#endif
