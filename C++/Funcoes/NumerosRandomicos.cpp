#include <iostream>
#include <cstdlib>

//importar <cstdlib>
using namespace std;

int gerarNumeroRandomico(int minimo, int maximo, int quantosNumeros)
{
	for(int i = 0; i < quantosNumeros; i++)
	{
		cout << minimo + (rand() % maximo) << endl;
	}
}
int main4()
{
	gerarNumeroRandomico(5, 6, 10);
	
	return 0;
}
