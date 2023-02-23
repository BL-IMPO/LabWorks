/* 
	LabWork 4: 6
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(void){
	
	// while n < 20
	double an;
	int n,i;
	
	cout << "Enter n: ";
	cin >> n;
	
	for(i = 0; i <= n; i++)
		cout << "a" << i << " = " << pow(-1, i) * (1 - ((pow(i+1, i))/pow(i+2, i))) << endl;

	
	return 0;
}
