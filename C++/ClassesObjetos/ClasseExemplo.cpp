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
	//Inst�ncia da classe
	ClasseBancaria cb;
	
	//Chamando m�todo
	cb.printaTexto();
	
	return 0;
}
