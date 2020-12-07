#ifndef SEXTA_CLASSE
#define SEXTA_CLASSE

class SextaClasse
{
	public:
		
		//variáveis
		int numero;
		
		//Construtor vazio		
		SextaClasse()
		{
		}
		
		//Construtor com parâmetro
		SextaClasse(int num)
		{
			numero = num;
		}
		
		//Sobrecarga de operador.
		SextaClasse operator*(SextaClasse &sc)
		{
			//Primeira instância
			SextaClasse resultado;
			
			//this = própria classe
			//sc = segunda instância (ponteiro)
			resultado.numero = this -> numero * sc.numero;
			
			return resultado;
		}
	
};

#endif
