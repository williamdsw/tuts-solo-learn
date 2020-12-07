#ifndef PESSOA_H
#define PESSOA_H

#include "Aniversario.h"

#include <iostream>

class Pessoa
{
	public:
		
		//Construtor cm par�metros inicializados
		Pessoa(std::string pnome, Aniversario pdata) : _nome(pnome), _data(pdata)
		{
		}
		
		//M�todo qualquer
		void printarInformacao()
		{
			std::cout << _nome << std::endl;
			
			_data.printarData();
		}
		
	private:
		
		//Vari�veis
		std::string _nome;
		Aniversario _data;
		
};

#endif
