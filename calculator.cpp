//simple calculator
#include<iostream>
using namespace std;

int main(){
	//defining variables
	float num1,num2;
	char oper;
	
	//getting input from user
	cout<<"enter num1"<<endl;
	cin>>num1;
	cout<<"enter num2"<<endl;
	cin>>num2;
	
	//operations in calculator
	cout<<"enter any operation[+,*,%,-]"<<endl;
		cin>>oper;
	//using switch case
	switch(oper){
		case '+':
			cout<<"result = "<<num1+num2;
			break;
		case '-':
			cout<<"result = "<<num1 - num2;
			break;
			case '*':
			cout<<"result = "<<num1 * num2;
			break;
		case '/':
			cout<<"result = "<<int(num1 / num2);//typecasting to int
			break;
		default:
			cout<<"enter valid operator";
			
	}
	
}
