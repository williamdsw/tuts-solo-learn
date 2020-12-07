#include <iostream>

using namespace std;

//Classe
class Pessoa
{
	private:
		
		//vari�veis
		string _nome;
		
	public:
		
		//construtor
		Pessoa(string novoNome)
		{
			_nome = novoNome;
		}
		
		//m�todo getter
		string GetNome()
		{
			return _nome;
		}
};

int main()
{
	//Inst�ncia da classe com construtor
	Pessoa pes("William");
	
	//Exibindo nome
	cout << pes.GetNome() << endl;
	
	return 0;
}
