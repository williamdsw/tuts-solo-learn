#ifndef QUARTA_CLASSE.H
#define QUARTA_CLASSE.H

class QuartaClasse
{
	public:
		
		QuartaClasse();
		
	private:
		
		int _numero;
		
		friend void printarNumero(QuartaClasse &qc);
};

#endif
