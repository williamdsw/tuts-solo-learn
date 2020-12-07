#include <iostream>

using namespace std;

//Classe
class ContaBancaria
{
	
	private:
		
		//variáveis
		string _nome;
		
	public:
		
		//Métodos getter e setter
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
	//Instância da classe
	ContaBancaria cb;
	
	//Chamando método e dando valor
	cb.SetNome("William");
	
	//Exibindo o valor
	cout << cb.GetNome() << endl;
	
	return 0;
}
