#include <iostream>
#include <string>
#include "funcionario.hpp"
#include "garcon.hpp"
//#include "mesa.hpp"


Garcon::Garcon(string nome, string id, float salario) : Funcionario{nome, id} {
	this->salario = salario;
};

Garcon::Rsalariogar() { return salario; };

Garcon::IniMesa(int NdeMesa){
	Mesa{NdeMesa};

}