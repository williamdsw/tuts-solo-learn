#ifndef SEXTA_CLASSE
#define SEXTA_CLASSE

class SextaClasse
{
	public:
		
		//vari�veis
		int numero;
		
		//Construtor vazio		
		SextaClasse()
		{
		}
		
		//Construtor com par�metro
		SextaClasse(int num)
		{
			numero = num;
		}
		
		//Sobrecarga de operador.
		SextaClasse operator*(SextaClasse &sc)
		{
			//Primeira inst�ncia
			SextaClasse resultado;
			
			//this = pr�pria classe
			//sc = segunda inst�ncia (ponteiro)
			resultado.numero = this -> numero * sc.numero;
			
			return resultado;
		}
	
};

#endif
