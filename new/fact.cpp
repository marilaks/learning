//factorial
#include<iostream>
using namespace std;

int main(){
	int n, m = 1;
	
	cout<<"enter the value"<<endl;
	cin>>n;
	
	//loop
	
	while(n != 1){
		m *= n;
		--n;
	}
	/*
	for(int i=1;i<=n;i++)
	{
		m *= i;
	}
	*/
	cout<<"factorial is "<<m<<endl;
}
