#include <iostream>

using namespace std;

//Classe
class Pessoa
{
	private:
		
		//variáveis
		string _nome;
		
	public:
		
		//construtor
		Pessoa(string novoNome)
		{
			_nome = novoNome;
		}
		
		//método getter
		string GetNome()
		{
			return _nome;
		}
};

int main()
{
	//Instância da classe com construtor
	Pessoa pes("William");
	
	//Exibindo nome
	cout << pes.GetNome() << endl;
	
	return 0;
}
