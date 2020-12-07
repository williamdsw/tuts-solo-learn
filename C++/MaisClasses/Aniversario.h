#ifndef ANIVERSARIO_H
#define ANIVERSARIO_H

#include <iostream>

class Aniversario
{
	public:
		
		//Construtor cm par�metros inicializados
		Aniversario(int pdia, int pmes, int pano) : _dia(pdia), _mes(pmes), _ano(pano)
		{}
		
		//M�todo qualquer
		void printarData()
		{
			std::cout << "Voc� nasceu em " << _dia << '/' << _mes << '/' << _ano << std::endl << std::endl;
		}
		
	private:
		
		int _dia, _mes, _ano;
		 
};

#endif
