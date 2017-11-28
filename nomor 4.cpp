#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int table[5][5];
	
	for ( int i = 0; i < 5; i++ )
	{
		for ( int j = 0; j < 5; j++ )
		{
			cout << setw(3);
			table[i][j] = ( i + 1 ) + ( j + 1 );
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
}
