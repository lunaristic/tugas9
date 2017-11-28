//tugas 9 nomer 1
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int table[10][10];

	for ( int i = 0; i < 10; i++ )
	{
		for ( int j = 0; j < 10; j++ )
		{
			/*
			setw digunakan untuk menentukan panjang karakter dari output
			setw(4) = menandakan panjang output adalah 4 karakter
			*/
			cout << setw(4);
			table[i][j] = ( i + 1 ) * ( j + 1 );
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
}
