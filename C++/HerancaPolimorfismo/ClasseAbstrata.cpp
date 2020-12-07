#include <iostream>

using namespace std;

//CLASSE ABSTRATA E HERAN�AS
class Inimigo
{
	public:
	
		//Construtor	
		Inimigo()
		{
			cout << "Construtor da classe Base" << endl;
		}
		
		//Destrutor
		~Inimigo()
		{
			cout << "Destrutor da classe Base" << endl;
		}
		
		//M�todo abstrato!!
		virtual void atacar() = 0;
		
	protected:
		
		//Vari�vel que ser� herdada
		string _nomeAtaque;
};

//Herda de Inimigo
class Ninja : public Inimigo
{
	public:
		
		//Construtor
		Ninja()
		{
			cout << "Construtor da classe Derivada" << endl;
		}
		
		//Destrutor
		~Ninja()
		{
			cout << "Destrutor da classe Derivada" << endl;
		}
		
		//Override do m�todo atacar() de Inimigo
		void atacar()
		{
			_nomeAtaque = "Shiruken!!";
			
			cout << "Ataque do Ninja : " << _nomeAtaque << endl;
		}	
};

int main()
{
	Ninja objNinja;
	
	Inimigo *ponteiroNinja = &objNinja;
	
	ponteiroNinja -> atacar();
	
	
}
