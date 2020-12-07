#include <iostream>
#include <fstream>

using namespace std;

void modificarArquivo(string nome, string conteudo)
{
	nome += ".txt";
	
	ofstream meuArquivo(nome.c_str());
	
	if(meuArquivo.is_open())
	{
		meuArquivo << conteudo << endl;
	}
	else
	{
		cout << "Algo deu errado no arquivo!";
	}
	
	meuArquivo.close();
}

void lerArquivo(string nome)
{
	string linha;
	
	nome += ".txt";
	
	ifstream meuArquivo(nome.c_str());
	
	while(getline(meuArquivo, linha))
	{
		cout << linha << endl;
	}
	
	meuArquivo.close();
}

int main()
{
	string nome, conteudo;
	
	char opcao;
	
	cout << "Modificando arquivos em C++ !" << endl << endl;
	
	cout << "Escolha uma das opções : " << "\n1 - Criar e modificar arquivo" << "\n2 - Ler dados do arquivo" << endl;
	
	cin >> opcao;
	
	switch(opcao)
	{
		case '1' :
						
			cout << "Digite o nome do arquivo : " << endl;
			
			cin >> nome;
			
			cout << "Digite o conteúdo do arquivo : " << endl;
			
			cin >> conteudo;
			
			modificarArquivo(nome, conteudo);
			
			break;
			
		case '2' :
						
			cout << "Digite o nome do arquivo (sem .txt) : ";
			
			cin >> nome;
			
			lerArquivo(nome);
			
			break;
			
		default :
			
			cout << "Opção inválida!";
			
			break;
	}
		
	return 0;
}
