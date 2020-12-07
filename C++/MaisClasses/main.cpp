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
	//inst�ncia normal
	SegundaClasse sc;
	
	//Chamada do m�todo
	sc.PrintaTexto();
	
	//Inst�ncia preenchendo o construtor
	TerceiraClasse tc(1,2.3F,3.002, 'a', "Teste", false);
	
	
	//COMPOSI��O
	//Inst�ncia preenchendo o construtor
	Aniversario data(2,10,1994);
	
	//Inst�ncia preenchendo o construtor
	Pessoa pes("William", data);
	
	//Criando ponteiro para a inst�ncia anterior
	Pessoa *ponteiroPessoa = &pes;
	
	//Chamando o m�todo pelo ponteiro
	ponteiroPessoa -> printarInformacao();
	
	
	//FRIEND
	//Inst�ncia normal
	QuartaClasse qc;
	
	//utilizando o m�todo "friend" declarado na QuartaClasse.h
	printarNumero(qc);
	
	
	//THIS -> (*this)
	//Inst�ncia com par�metro
	QuintaClasse qca(18);
	
	//chamando a fun��o que usa os 'this'
	qca.printaInteiro();
	
	
	//SOBRECARGA DE OPERADOR
	//Inst�ncia com par�metro
	SextaClasse sc1(15), sc2(10);
	
	//Inst�ncia do resultado que receber� a multiplica��o
	SextaClasse resultado = sc1 * sc2;
	
	//Printando
	cout << "Resultado de sc1 * sc2 = " << resultado.numero << endl << endl;
	
	
	//Inst�ncia Normal
	MinhaClasse mc;
	
	
	return 0;
}
