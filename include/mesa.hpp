#ifndef _MESA_H
#define _MESA_H

#include<iostream>
#include<string>
//#include<>

//mesa inicializa pedido e envia pra ele os pedidos feitos 
//mesa tbm envia todos os pedidos para historico para que ele registrar quando os mesmos forem finalizados

class Mesa{
private:
	int NdeMesa;
public:
	//constructor do objeto Mesa:
	Mesa(int NdeMesa);


	//funções do objeto Mesa:
	void IniPedido();



};


#endif
