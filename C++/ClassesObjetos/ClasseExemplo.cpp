#include <iostream>

using namespace std;

//Classe
class ClasseBancaria
{
	public:
		
		void printaTexto()
		{
			cout << "Ola Mundo";
		}
};

int main1()
{
	//Instância da classe
	ClasseBancaria cb;
	
	//Chamando método
	cb.printaTexto();
	
	return 0;
}
