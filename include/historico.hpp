#ifndef _HISTORICO_H
#define _HISTORICO_H


/*escopo das historico.cpp*/


#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include "pedido.hpp"

class Historico{
    private:
    vector <Pedido> pedidos_dia;

    public:
    Historico();
    void addPedido(Pedido p);
};


#endif