#include "TerceiraClasse.h"

#include <iostream>

using namespace std;

//Construtor com par�metros inicializ�veis
TerceiraClasse::TerceiraClasse(int it, float pf, double pfd, char crt, string str, bool bol) : inteiro(it), pontoFlutuante(pf),
																							   pontoFlutuanteDuplo(pfd),
																							   caracter(crt), minhaString(str),
																							   booleano(bol)   
{
	cout << "Vari�veis" << endl << endl;
	cout << "int : " << it << endl;
	cout << "float : " << pf << endl;
	cout << "double : " << pfd << endl;
	cout << "char : " << crt << endl;
	cout << "string : " << str << endl;
	cout << "bool : " << bol << endl << endl;
}
