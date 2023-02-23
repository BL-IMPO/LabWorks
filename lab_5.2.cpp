/* Labwork 5.2 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

using namespace std;

void Task_1_6(void){
	
	int a, b;
	
	cout << "Enter a and b: ";
	cin >> a >> b;
	
	int * ptr_a = &a;
	int * ptr_b = &b;
	
	if(*ptr_a > *ptr_b)
	{
		*ptr_a *= 5; 
      *ptr_b -= 5;
	}
	else
	{
		*ptr_b *= 5; 
      *ptr_a -= 5;
	}
	
	cout << "New a: " << *ptr_a << ";New b: " << *ptr_b << endl;		  
		
	return;
} 

void Task_2_6(void){
	
	srand(time(NULL));
	double * ptr_1, * ptr_2, * ptr_3;
	double rn1, rn2, rn3;
	
	rn1 = rand();
	rn2 = rand();
	rn3 = rand();
	ptr_1 = &rn1;
	ptr_2 = &rn2;
	ptr_3 = &rn3;
	
	printf("Pointers 1: %lf; 2: %lf; 3: %lf;\n",*ptr_1, *ptr_2, ptr_3);
	printf("New pointer 1: %lf", *ptr_1 / 2);
	
	return;
}

void Task_3_6(void){
	
	int n, count_p = 0, count_q = 0;
	int i;
	
	cout << "Enter size n: ";
	cin >> n;
	
	int * p = new int[n];
	int * q = new int[i];
	
	srand(time(NULL));
	
	for(i = 0; i < n; i++)
	{
		p[i] = ((rand() % 2) == 0)  ?(-1 * (rand() % 100)): (rand() % 100);
		q[i] = ((rand() % 2) == 0)  ?(-1 * (rand() % 100)): (rand() % 100);
	}
	
	for(i = 0; i < n; i++)
	{
		if(p[i] > 0)
			count_p++;
		if(q[i] > 0)
			count_q++;
	}
	
	if(count_p > count_q)
		cout << "Array p have great positive elements.\n";
	else
		cout << "Array q have great positive elements.\n";
	
	
	delete[] p;
	delete[] q;
	
	return;
}

void Task_4_6(void){
	
	int n, nb;
	int i, j;
	int mb;
	
	cout << "Enter size: ";
	cin >> n;
	
	int * a = new int[n];
	
	for(i = 0, nb = 0; i < n; i++)
	{
		a[i] = ((rand() % 2) == 0)  ?(-1 * (rand() % 100)): (rand() % 100);
		
		if(a[i] > 0)
			nb++;	
	}
	
	int * b = new int[nb];
	
	for(i = 0, j = 0; i < n; i++)
		if(a[i] > 0)
		{
			b[j] = a[i] / 3;
			j++;
		}	
		
	for(i = 0; i < nb-1; i++)
	{
		for(j = i+1; j < nb; j++)
		{
			if(b[i] > b[j])
				mb = b[j];
				b[j] = b[i];
				b[i] = mb;
		}
	}
	
	cout << "Array a: \n";
	for(i = 0; i < n; i++)
		cout << a[i] << "\t";
	
	cout << "\nArray b: \n";
	for(i = 0; i < nb; i++)
		cout << b[i] << "\t";

	delete[] a;
	delete[] b;
	
	return;
}

int main(void){
	
	//Task_1_6();
	//Task_2_6();
	//Task_3_6();
	Task_4_6();
	
	return 0;
}
