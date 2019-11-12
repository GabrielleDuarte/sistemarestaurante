/*
definir o que mesa faz:
1. pegar o pedido e a quantidade do q se quer e inicializa o pedido com isso,
2. enviar para HISTORICO quando os pedidos forem finalizados e o garcon q o fez
*/
#include<iostream>
#include<string>
#include"mesa.hpp"
#include"pedido.hpp"
//#include<>

Mesa::Mesa(string NdeMesa){
	this->NdeMesa= NdeMesa;
};

string Mesa::IniPedido(){

};