//pointers basics
#include<iostream>
using namespace std;

int main(){
	int x = 10;
	int *p;//declaring integer pointer
	p = &x; //storing the address of x to p
	
	//address of p variable
	cout<<"address of p "<<&x<<endl;
	cout<<"address of p "<<&p<<endl;
	
	//address stored in p var
	cout<<"address stored in p"<<p<<endl;
	
	//access value using pointer
	cout<<"accessing value "<<*p<<endl;
}
