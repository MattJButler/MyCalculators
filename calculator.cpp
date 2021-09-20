#include <iostream>

using std::endl;
using std::cout;
using std::cin;
using std::string;
//
//	Complicated c++ calculator 
//
int main(){
	int add(x,y){
		return x+y
		}
	int sub(x,y){
		return x-y
		}
	int mult(x,y){
		return x*y
		}
	int div(x,y){
		return x/y
		}
	
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
		cout << num1 << "+" << num2 << "=" << add(num1,num2) << endl;
	}
	
		else if (intinput == "2"){
			
			cout << num1 << "-" << num2 << "=" << sub(num1,num2) << endl;
		}
	
		else if ( intinput == "3"){
			
			cout << num1 << " x " << num2 << "=" << mult(num1,num2) << endl;
		}
	
		else if (intinput == "4"){
			
			cout << num1 << "/" << num2 << "=" << div(num1,num2) << endl;
		}
	
		
	}
	
	
		
	return 0;
}




	
	
