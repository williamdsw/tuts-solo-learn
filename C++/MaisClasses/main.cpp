#include <iostream>

#include "MinhaClasse.h"
#include "SegundaClasse.h"
#include "TerceiraClasse.h"
#include "Aniversario.h"
#include "Pessoa.h"
#include "QuartaClasse.h"
#include "QuintaClasse.h"
#include "SextaClasse.h"

using namespace std;

int main()
{
	//instância normal
	SegundaClasse sc;
	
	//Chamada do método
	sc.PrintaTexto();
	
	//Instância preenchendo o construtor
	TerceiraClasse tc(1,2.3F,3.002, 'a', "Teste", false);
	
	
	//COMPOSIÇÃO
	//Instância preenchendo o construtor
	Aniversario data(2,10,1994);
	
	//Instância preenchendo o construtor
	Pessoa pes("William", data);
	
	//Criando ponteiro para a instância anterior
	Pessoa *ponteiroPessoa = &pes;
	
	//Chamando o método pelo ponteiro
	ponteiroPessoa -> printarInformacao();
	
	
	//FRIEND
	//Instância normal
	QuartaClasse qc;
	
	//utilizando o método "friend" declarado na QuartaClasse.h
	printarNumero(qc);
	
	
	//THIS -> (*this)
	//Instância com parâmetro
	QuintaClasse qca(18);
	
	//chamando a função que usa os 'this'
	qca.printaInteiro();
	
	
	//SOBRECARGA DE OPERADOR
	//Instância com parâmetro
	SextaClasse sc1(15), sc2(10);
	
	//Instância do resultado que receberá a multiplicação
	SextaClasse resultado = sc1 * sc2;
	
	//Printando
	cout << "Resultado de sc1 * sc2 = " << resultado.numero << endl << endl;
	
	
	//Instância Normal
	MinhaClasse mc;
	
	
	return 0;
}
