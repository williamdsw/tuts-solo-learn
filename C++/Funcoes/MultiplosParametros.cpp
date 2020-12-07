#include <iostream>

using namespace std;

int somarInteiros(int a, int b)
{
	return a + b;
}

int main3()
{
	int a, b;
	
	cout << "Digite o primeiro inteiro : ";
	cin >> a;
	cout << "\nDigite o segundo inteiro : ";
	cin >> b;
	cout << "\nSoma deles : " << somarInteiros(a, b);
	
	return 0;
}
