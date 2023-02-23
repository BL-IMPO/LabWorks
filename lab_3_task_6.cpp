#include <iostream>
#include <cmath>

using namespace std;

int main(void){
	
	double y, x;
	
	cout << "Enter x: ";
	cin >> x;
	
	y = pow(log(x), 2) + (pow(x, 3)/3);
	
	cout << "Aswer y = " << y;
	
	return 0;
}
