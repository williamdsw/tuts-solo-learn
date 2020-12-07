#ifndef PESSOA_H
#define PESSOA_H

#include "Aniversario.h"

#include <iostream>

class Pessoa
{
	public:
		
		//Construtor cm parâmetros inicializados
		Pessoa(std::string pnome, Aniversario pdata) : _nome(pnome), _data(pdata)
		{
		}
		
		//Método qualquer
		void printarInformacao()
		{
			std::cout << _nome << std::endl;
			
			_data.printarData();
		}
		
	private:
		
		//Variáveis
		std::string _nome;
		Aniversario _data;
		
};

#endif
