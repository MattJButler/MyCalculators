#include <iostream>

using std::endl;
using std::cout;
using std::cin;
using std::string;
//
//	Complicated c++ calculator 
//
int main(){
	
	cout << "\x1B[2J\x1B[H";
	cout << "enter a number:" << endl;
	cout << "1) add" << endl;
	cout << "2) subtract" << endl;
	cout << "3) multiply" << endl;
	cout << "4) divide" << endl;
	cout << "Choose the options: ";
	string intinput;
	cin >> intinput;
	
	int num1;
	int num2;
	cout << "\x1B[2J\x1B[H";
	cout << "pick first number: ";
	
	cin >> num1;

	cout << "pick a second number: ";
	
	cin >> num2;
	
	
	if (intinput == "1","2","3","4"){
		if (intinput == "1"){
	
		int sum = num1+num2;
		cout << num1 << "+" << num2 << "=" << sum << endl;
	}
	
		else if (intinput == "2"){
			int sum = num1-num2;
			cout << num1 << "-" << num2 << "=" << sum << endl;
		}
	
		else if ( intinput == "3"){
			int sum = num1*num2;
			cout << num1 << " x " << num2 << "=" << sum << endl;
		}
	
		else if (intinput == "4"){
			int sum = num1/num2;
			cout << num1 << "/" << num2 << "=" << sum << endl;
		}
	
		
	}
	
	
		
	return 0;
}




	
	
