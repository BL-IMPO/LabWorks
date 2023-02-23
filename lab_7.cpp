#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

struct BABY_FORM{
	char NAME[30];
	char SEX[7];
	float HEIGHT;
};

struct BIRTHDAY_STUDENT{
	int DAY;
	int MONTH;
	int YEAR;
};

struct STUDENT_FORM{
	char NAME[30];
	BIRTHDAY_STUDENT BIRTHDAY;
	char SEX[7];
};

char * lower(char * str){
	
	int i;
	char result[7];
	
    for (i = 0; str[i] != '\0'; i++) {
        result[i] = tolower(str[i]);
    }
	
	return  result;
}

void Task_1_6(void){
	
	const int n = 20;
	float max_height = 0;
	int i, max_i;
	BABY_FORM arr[n];
	
	bool ch;
	cout << "Use simple mode?(1 or 0): ";
	cin >> ch;
	if(ch)
	{
		for(i = 0; i < n; i++)
		{
			cin.ignore();
			cin.getline(arr[i].NAME, 30);
			cin.getline(arr[i].SEX, 7);
			cin >> arr[i].HEIGHT;
		}
	}
	if(!ch)
	{
		for(i = 0; i < n; i++)
		{
			cout << "{" << i+1 << "}\n";
			cin.ignore();
			cout << "Enter a babyes name:\n-->\t";
			cin.getline(arr[i].NAME, 30);
			cout << "Enter a babyes sex:\n-->\t";
			cin.getline(arr[i].SEX, 7);
			cout << "Enter a babyes height:\n-->\t";
			cin >> arr[i].HEIGHT;
		}
	}
	
	// search max heigth 
	for(i = 0; i < n; i++)
	{	
		char now_sex[7] = lower(arr[i].SEX);
		
		if(!strcmp(now_sex, "female"))
		{
			if(arr[i].HEIGHT > max_height)
			{
				max_height = arr[i].HEIGHT;
				max_i = i;
			}
		}
	}
	
	cout << "\nMAX HEIGHT:\n" << arr[max_i].NAME << "\n" << arr[max_i].SEX << "\n" << max_height << "\n";
	
	
	return;
}

void Task_2_6(void){
	
	const int n = 25;
	int i;
	STUDENT_FORM arr[n];
	
	bool ch;
	cout << "Use simple mode?(1 or 0): ";
	cin >> ch;
	if(ch)
	{
		for(i = 0; i < n; i++)
		{
			cin.ignore();
			cin.getline(arr[i].NAME, 30);
			cin >> arr[i].BIRTHDAY.DAY;
			cin.ignore();
			cin >> arr[i].BIRTHDAY.MONTH;
			cin.ignore();
			cin >> arr[i].BIRTHDAY.YEAR;
			cin.getline(arr[i].SEX, 7);
		}
	}
	if(!ch)
	{
		for(i = 0; i < n; i++)
		{
			cout << "{" << i+1 << "}\n";
			cin.ignore();
			cout << "Enter a students name:\n-->\t";
			cin.getline(arr[i].NAME, 30);
			cout << "Enter students birthday( us day/month/year):\n-->\t";
			cin >> arr[i].BIRTHDAY.DAY;
			cin.ignore();
			cin >> arr[i].BIRTHDAY.MONTH;
			cin.ignore();
			cin >> arr[i].BIRTHDAY.YEAR;
			cout << "Enter a students sex:\n-->\t";
			cin.getline(arr[i].SEX, 7);
		}
	}
	
	//
	cout << "\nWOMEN WITH BIRTHDAY IN DECEMBER.\n";
	for(i = 0; i < n; i++)
	{	
		char now_sex[7] = lower(arr[i].SEX)
		
		if(!strcmp(now_sex, "female"))
		{
			if(arr[i].BIRTHDAY.MONTH == 12)
			{
				cout << arr[i].NAME;
			}
		}
	}
	
	return;
}

int main(void){
	
	Task_1_6();
	
	return 1;
}