/* Labwork 5.1 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

int main(void){
	
	int n, i, j = 0;
	
	cout << "Enter size for array A: ";
	cin >> n;
	
	int * A = new int[n];
	int * B = new int[n-1];
	
	srand(time(NULL));
	
	for(i = 0; i < n; i++)
		A[i] = rand() % 5 + 2;
	
	for(i = 0; i < n; i++)
		if((A[i] * i) > 10)
		{
			B[j] = A[i];
			j++;
		}
	cout << "Elements whose index is greater than 10 when multiplied by them.\n";
	for(i = 0; i < j; i++)
 		  cout << B[i] << "\n";
	
	delete[] A;
	delete[] B;
	
	return 0;
}
