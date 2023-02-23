/* Labwork 6 */
#include <iostream>
#include <string>

using namespace std;

void Task_1_6(void){
	
	string str;
	char symbol = '.';
	
	cout << "Enter text:\n-->\t";
	getline(cin, str);
	
	cout << "\nIndex value whose have end for sentence: \n";
	for(int i = 0; i < str.length()-1; i++)
	{
		if(str[i] == symbol)
		{
			cout << i+1 << "\t";
			str[i+1] = '\n';
		}
	}
	
	cout << "\n\nNEW sentence: \n" << str;
	
	return;
}

void Task_2_6(void){
	
	string name, s_name, surname;
	string short_form;
	
	cout << "Enter 'name': ";
	cin >> name;
	cout << "Enter 'surname': ";
	cin >> surname;
	cout << "Enter 'second name': ";
	cin >> s_name;
	
	
	short_form = surname + " " + name[0] + ". " + s_name[0] + "." ;
	cout << "New short form: " << short_form << "\n";
	
	return;
}

void Task_3_6(void){
	
	string str, symb;
	
	cout << "Enter math text:\n-->\t";
	getline(cin, str);
	
	for(int i = 0; i < str.length(); i++)
	{
		switch(str[i])
		{
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case '0':
			case '+':
			case '-':
			case '*':
			case '/':
			case '=':
			symb = symb + str[i] + " ";
		}
	}
	
	cout << "Arithmetic and number symbols sentence:\n " << symb << "\n";
	
	return;
}

void Task_4_6(void){
	
	string str;
	bool ch = 1;
	
	cout << "Enter word: ";
	cin >> str;
	
	for(int i = str.length()-1, j = 0; i >= 0; i--, j++)
	{
		if(str[i] == str[j])
			continue;	
				
		ch = 0;
		break;
	}
	
	if(ch)
		cout << "\nTRUE!\n";
	else
		cout << "\nFALSE!\n";
	
	return;
}

int main(void){
	
	//Task_1_6();
	//Task_2_6();
	//Task_3_6();
	Task_4_6();
	
	return 1;
}