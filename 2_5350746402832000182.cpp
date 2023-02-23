#include <iostream>
#include <cmath>// зачем?

using namespace std;

int main(void)
{
	setlocale(0,"");
	int a,b;
	int max, min;
	// лучше будет если ты будешь разделать переменные предназначенные для разных целей
	cin>>a>>b;
	
	if(a > b)
		max = a;
	else 
		min = b;
	
	// можно было оставить как у тебя но так читается лучше и код понятнее
	
	cout<<"max="<<max<<"\nmin="<<min<<endl;
	// перепутал местами у тебя мин стояло там где мах
	
	return 0;
}
