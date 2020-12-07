#include <iostream>

using namespace std;

//Sobrecarga de métodos
void printarNumero(int numero)
{
	cout << "Inteiro : " << numero << endl;
}

void printarNumero(float a, float b)
{
	cout << "Float : " << a << " " << b << endl;
}

int main5()
{
	printarNumero(1);
	
	printarNumero(10.5, 22.1);
	
	return 0;
}
