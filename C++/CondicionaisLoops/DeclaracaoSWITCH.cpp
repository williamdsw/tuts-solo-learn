#include <iostream>

using namespace std;

int main6()
{
	char letra = 'a';
	
	switch(letra)
	{
		case 'a' : case 'e' : case 'i' : case 'o' : case 'u' : case 'w' : case 'y' : 
			
			cout << "� vogal" << endl;
			
			break;
			
		default : 
		
			cout << "� consoante" << endl;
	}
	return 0;
}
