#include <iostream>
#include <cmath>

using namespace std;

/*
TO DO:
	Make ERROR informator.
*/

int main(void){
	
	float t1, t2, x;
	float a = 12.30, b = 10.5;
	
	cout << "Enter x: ";
	cin >> x;
	
	float ab = a - b, ax = a + x; // simplify
	t1 = ((-1)/pow(ab, 2)) * (1/(ax)) + (1/(1+x))+(2/pow(ab, 3))* log((ax)/(b+x));
	
 	ax = a*x;
 	float a2 = 2*a;
	t2 = ((-1)/(a2)) *((cos(ax)/(a2*pow(sin(ax),2))) - log(tan(ax/2)));
	
	cout << "t1 = " << t1 << "\nt2 = " << t2 << endl;
	
	
	return 0;
}
