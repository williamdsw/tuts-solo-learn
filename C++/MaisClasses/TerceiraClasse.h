#ifndef TERCEIRA_CLASSE.H
#define TERCEIRA_CLASSE.H

#include <iostream>

class TerceiraClasse
{
	public:
		
		//Construtor com parâmetros
		TerceiraClasse(int it, float pf, double pfd, char crt, std::string str, bool bol);
		
	private: 
	
		//Variáveis
		int inteiro;
		float pontoFlutuante;
		double pontoFlutuanteDuplo;
		char caracter;
		std::string minhaString;
		bool booleano;		
};

#endif
