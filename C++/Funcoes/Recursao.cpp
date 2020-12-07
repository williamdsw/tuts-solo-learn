#include <iostream>

using namespace std;

int funcaoFactorial(int numero)
{
	if(numero == 1)
	{
		return numero;
	}
	else
	{
		return numero * funcaoFactorial(numero - 1);
	}
}

int main()
{
	cout << "Factorial de 22 : " << funcaoFactorial(22);
	
	return 0;
}
