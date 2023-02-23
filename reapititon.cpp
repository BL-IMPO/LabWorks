// task 6
#include <iostream>

using namespace std;

int main(void){
		
	const float Pi = 3.14;	
	float S, V;
	float r, h;
	
	cout << "Enter -h and -r: ";
	cin >> h >> r;
	
	cout << "S = " << 2*Pi * r * (r + h) << endl;
	cout << "V = " << Pi * (r*r) * h << endl;
	
	return 0;
}


