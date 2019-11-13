#include <iostream>
#include <fstream>
#include <string>
#include "historico.hpp"
 /*definir historico: recebe os pedidos feitos e acumula as informações me um arquivo*/

 void Historico::addPedido(Pedido p){
	pedidos_dia.push_back(p);
}