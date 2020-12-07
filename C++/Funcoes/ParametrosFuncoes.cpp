#include <iostream>

using namespace std;

//métodos
void printaTexto(string texto)
{
	cout << texto << endl;
}

int inteiroQuadrado(int numero)
{
	return numero * numero;
}

int main2()
{
	printaTexto("Mostrando o quadrado do numero 7 : ");
	
	cout << inteiroQuadrado(7) << endl;
	
	return 0;
}
