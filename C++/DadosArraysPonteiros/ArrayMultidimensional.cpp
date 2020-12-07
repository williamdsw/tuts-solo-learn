#include <iostream>

using namespace std;

int main6()
{
	int arrayInteiros[3][4];
	float arrayFloat[2][3] = 
	{
		{0.1, 0.2, 0.3},
		{1.1, 1.2, 1.3}
	};
	
	for(int i = 0; i< 2 ; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << arrayFloat[i][j] << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}
