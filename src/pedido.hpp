#ifndef _PEDIDO_H
#define _PEDIDO_H

#include<iostream>
#include<string>
#include<vector>
#include "pratos.hpp"

//mesa inicializa pedido e envia pra ele os pedidos feitos 
//mesa tbm envia todos os pedidos para historico para que ele registrar quando os mesmos forem finalizados

class Pedido{
private:
    vector<Pratos> prato_pedido;	
};

#endif
