#include <iostream>

using namespace std;

int main()
{
	int idade = 30;
	int media = 8;
	
	if(idade > 20 && idade < 30)
	{
		cout << "Você tem mais de 20 anos e menos de 30 anos" << endl;
	}
	
	if((idade >= 30 && idade < 40) && media >= 6) 
	{
		cout << "Você tem 30 anos ou mais e está aprovado" << endl;
	}
	
	if(idade >= 40 || media >= 6)
	{
		cout << "Aceito!" << endl;
	}
	
	if(!(idade < 30))
	{
		cout << "Você não tem menos de 30 anos!" << endl;
	}
	
	return 0;
}
