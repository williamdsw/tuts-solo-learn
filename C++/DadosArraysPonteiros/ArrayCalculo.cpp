#include <iostream>

using namespace std;

int main5()
{
	int meuArray[5];
	int soma = 0;
	
	for(int i = 0; i < 5; i++)
	{
		meuArray[i] = i;
		
		soma += meuArray[i];
		
		cout << "Valor do indice : " << meuArray[i]<< endl;
		cout << "Valor da soma : " << soma << endl;
	}
	
	return 0;
}
