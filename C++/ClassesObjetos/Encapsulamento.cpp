#include <iostream>

using namespace std;

//Classe
class ContaBancaria
{
	
	private:
		
		//vari�veis
		string _nome;
		
	public:
		
		//M�todos getter e setter
		void SetNome(string novoNome)
		{
			_nome = novoNome;
		}
		
		string GetNome()
		{
			return _nome;
		}
};

int main2()
{
	//Inst�ncia da classe
	ContaBancaria cb;
	
	//Chamando m�todo e dando valor
	cb.SetNome("William");
	
	//Exibindo o valor
	cout << cb.GetNome() << endl;
	
	return 0;
}
