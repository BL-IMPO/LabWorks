#include <iostream>
#include <cmath>

using namespace std;

void problem_1(void);
void problem_2(void);
void problem_3(void);
void problem_4(void);
void problem_5(void);
void problem_6(void);
void problem_7(void);
void problem_8(void);
void problem_9(void);
void problem_10(void);

int main(void){
	
	problem_1();
	problem_2();
	problem_3();
	problem_4();
	problem_5();
	problem_6();
	problem_7();
	problem_8();
	problem_9();
	problem_10();
	
	return 0;
}

void problem_1(void){
	
	cout<<"\n\n\nProblem 1"<<endl;
	
	int i;
	for(i = 10; i <= 20; i++)
		cout<<i<<"^2 = "<<i * i<<endl;
	
	return;
}

void problem_2(void){
	
	cout<<"\n\n\nProblem 2"<<endl;
	
	int i;
	for(i = 35; i <= 87; i++)
		if( i % 7 == 1 || i % 7 == 2 || i % 7 == 5 )
			cout<<"Num = "<<i<<endl;
	
	return;
}

void problem_3(void){
	
	cout<<"\n\n\nProblem 3"<<endl;
	
	int i;
	unsigned int n;
	int sum = 0;
	
	cout<<"Enter -n- : ";
	cin>>n;
	
	for(i = 0; i <= n; i++)
		sum += i;
	
	cout<<"Sum = "<<sum<<endl;
	
	return;
}

void problem_4(void){
	
	cout<<"\n\n\nProblem 4"<<endl;
	
	int i;
	int n = 1;
	short int usr;
	
	cout<<"Enter integer number of three digits : ";
	cin>>usr;
	
	for(i = 3; i >= 1; i--)
		n *= usr % (int)pow(10, i) / (int)pow(10,i - 1);
	
	cout<<"Multi = "<<n<<endl;
		
	return;
}

void problem_5(void){
	
	cout<<"\n\n\nProblem 5"<<endl;
	
	int i;
	int count = 0;
	short int usr;
	
	cout<<"Enter integer number of three digits : ";
	cin>>usr;
	
	for(i = 3; i >= 1; i--)
		if((usr % (int)pow(10, i) / (int)pow(10,i - 1)) % 2 == 0)
			count += 1;
	
	cout<<"Count even numbers : "<<count;
	
	return;
}

void problem_6(void){
	
	cout<<"\n\n\nProblem 6"<<endl;
	
	int i,n;
	int max = 0;
	short int usr;
	
	cout<<"Enter integer number of three digits : ";
	cin>>usr;
	
	for(i = sizeof(usr); i >= 1; i--)
	{
		n = usr % (int)pow(10, i) / (int)pow(10,i - 1);
		max = (n > max) ?n: max;
	}
	
	cout<<max;
	
	return;
}

void problem_7(void){
	
	cout<<"\n\n\nProblem 7"<<endl;
	
	int i;
	for(i = 1; i <= 9; i++)
		cout<<"3*"<<i<<"="<<3*i<<endl;
	
	return;
}

void problem_8(void){
	
	cout<<"\n\n\nProblem 8"<<endl;
	
	int sum = 0;
	int min, max;
	int i;
	
	cout<<"Enter min : ";
	cin>>min;
	cout<<"Enter max : ";
	cin>>max;
	
	for(i = min; i <= max; i++)
		if(i % 2 != 0)
			sum += i;
			
	cout<<"SUM odd number from "<<min<<" to "<<max<<" : "<<sum<<endl;
	
	return;
}

void problem_9(void){
	
	cout<<"\n\n\nProblem 9"<<endl;
	
	int i;
	int mod = 1;
    int usr;
	
	cout<<"Enter number : ";
	cin>>usr;
	
	for(i = 2; i < usr; i++)
		if(usr % i == 0)
			mod = 0;
			
	if(mod == 1)
		cout<<usr<<" is prime number."<<endl;
	else
	    cout<<usr<<" is composite number."<<endl;
		
	return;
}

void problem_10(void){
	
	cout<<"\n\n\nProblem 10"<<endl;
	
	int x,y;
	
	cout<<"Enter number : ";
	cin>>x;
	
	while( isalpha(x) == 0)
	{ 	
	 	if(x > 0)
	 		y = 2 * x - 10;
		if(x == 0)
	 		y = 0;
	 	if(x < 0)
		 	y = 2 * abs(x) - 1;
			 
		cout<<"y = f("<<x<<")\ny = "<<y<<endl;
		
		// cheks on countinue
		cout<<"[1]|| Continue\n[0]|| Exit"<<endl;
		cin>>x;
		if(x == 0)
			break;
		
		// continue
		cout<<"Enter number : ";
		cin>>x;
	}
	
	return;
}
