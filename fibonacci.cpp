
#include<iostream>
using namespace std;

int main(){
	
	int i,sum,n1=0,n2=1;
	
	//getting input
	cout<<"enter limit"<<endl;
	cin>>i;
	
	cout<<"fibonacci value is "<<n1<<endl;
	cout<<"fibonacci value is "<<n2<<endl;
	
	//function
	for(int j=1;j<i;j++){
		
		sum = n1+n2;
		n1 = n2;
		n2 = sum;
		
		cout<<"fibonacci value is "<<sum<<endl;
	}
	
	
	
}
