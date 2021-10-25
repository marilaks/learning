
#include<iostream>
using namespace std;

int main(){
	
	int i,sum,n1=0,n2=1;
	
	//getting input
	cout<<"enter limit"<<endl;
	cin>>i;
	
	//function
	for(int j=0;j<i;j++){
		
		sum = n1+n2;
		n1 = n2;
		n2 = sum;
		
		cout<<"first "<<j<<" th fibonacci value is "<<sum<<endl;
	}
	
	
	
}
