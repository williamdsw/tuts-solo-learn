#include <iostream>

using namespace std;

int main()
{
	//ponteiro
	int *ponteiroInteiro = new int;
	*ponteiroInteiro = 5;
	
	cout << "Endereco alocado : " << ponteiroInteiro << endl;
	cout << "Valor : " << * ponteiroInteiro << endl;
	
	delete ponteiroInteiro;
	
	return 0;
}
