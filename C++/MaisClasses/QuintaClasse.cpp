#include "QuintaClasse.h"

#include <iostream>

using namespace std;

QuintaClasse::QuintaClasse(int num) : _numero(num)
{
	cout << "Inicializando a QuintaClasse que utiliza o ponteiro THIS" << endl; 
}

void QuintaClasse::printaInteiro()
{
	cout << "Sem this : " << _numero << endl;
	cout << "Utilizando this -> _numero : " << this -> _numero << endl;
	cout << "Utilzando (*this)._numero : " << (*this)._numero << endl << endl;
}

