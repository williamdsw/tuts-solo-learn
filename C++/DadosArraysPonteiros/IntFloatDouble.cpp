#include <iostream>

using namespace std;

int main2()
{
	//inteiros
	int inteiro = 1;
	signed int inteiroPositivoNegativo = -1;
	unsigned int inteiroPositivo = 5;
	short int inteiroMetade = 2;
	long int inteiroDobro = 3;
	
	//float e double
	float pontoFlutuante = 3.2343;
	double pontoFlutuanteDuplo = 0.1234;
	long double pontoFlutuanteDuploMaior = 1923.123123;
	
	cout << "Inteiros : " << endl;
	cout << inteiro << endl << inteiroPositivoNegativo << endl << inteiroPositivo << endl << inteiroMetade << endl << inteiroDobro << endl
		 << endl;
	
	cout << "Pontos Flutuantes : " << endl;
	cout << pontoFlutuante << endl << pontoFlutuanteDuplo << endl << pontoFlutuanteDuploMaior << endl;
	
	return 0;
}
