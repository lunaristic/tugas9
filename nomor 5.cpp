#include <iostream>
using namespace std;

int main()
{
	int line[15];
	
	for ( int i = 0; i < 15; i++ )
	{
		line[i] = 2 * ( i + 1 );
		cout << line[i] << " ";
	}
	
}
