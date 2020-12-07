#include "QuartaClasse.h"

#include <iostream>

using namespace std;

QuartaClasse::QuartaClasse()
{
	cout << "Construtor da Quarta Classe que usa um friend..." << endl;
}

void printarNumero(QuartaClasse &qc)
{
	qc._numero = 15;
	
	cout << "Valor de _numero : " << qc._numero << endl << endl;
}
