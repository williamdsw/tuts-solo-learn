#include <iostream>

using namespace std;

int main()
{
	int idade = 30;
	int media = 8;
	
	if(idade > 20 && idade < 30)
	{
		cout << "Voc� tem mais de 20 anos e menos de 30 anos" << endl;
	}
	
	if((idade >= 30 && idade < 40) && media >= 6) 
	{
		cout << "Voc� tem 30 anos ou mais e est� aprovado" << endl;
	}
	
	if(idade >= 40 || media >= 6)
	{
		cout << "Aceito!" << endl;
	}
	
	if(!(idade < 30))
	{
		cout << "Voc� n�o tem menos de 30 anos!" << endl;
	}
	
	return 0;
}
