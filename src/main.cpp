#include "funcionario.hpp"
#include "gerente.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	Gerente a{"Tadeu", "4L3RT", 0 };
	cout << a.Rsalariog() << endl;
}