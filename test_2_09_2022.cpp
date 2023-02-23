#include <iostream>

int main(void){
	
	int x,y,z;// инициализируем целочисленные  переменные
	
	std :: cin>>x>>y;// делаем запрос на ввод
	
	
	
	if (x > 0 && x < 10)
		std :: cout<<x*x*x<<"\n";
	else if(x > 10 && x < 100)
		std :: cout<<x*x;
	else if(x > 100 && x < 1000)
	{	
		z = x + y * y;
		std :: cout<<z;
	}
	
	return 0;
	}
