#include <iostream>
using namespace std;

int main()
{
	int n;
	bool flip = false;
	
	cout << "masukkan nilai n : ";
	cin >> n;
	
	int angka = n;
	int t; //pembantu
	
	for(int i = 0; i < (2*n-1); i++) 
	{
		//Flip
		if((2*n-1-i) == n - 1) 
		{
			flip = !flip;
			t = n - 2;
		}
	
		for(int j = 0; j < (2*n-1); j++) 
		{
			//Proses increase atau decrease
			if(!flip) {
				if(n - i <= n - j && j > 0) {
					angka--;
				}
				else if(j >= (2*n-1) - i) {
					angka++;
				}
			}
			else {
				if(n - t <= n - j && j > 0) {
					angka--;
				}
				else if(j >= (2*n-1) - t) {
					angka++;
				}
			}
			cout<<angka;
		}
		cout<<endl;
		
		//Mereset nilai angka ke nilai n
		angka = n;
		
		//Decrease variabel t
		t--;
	}
}
