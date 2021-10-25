
#include<iostream>
using namespace std;

int main(){
	
	int i,sum=0;
	
	//getting input
	cout<<"enter limit"<<endl;
	cin>>i;
	
	//function
	for(int j=0;j<i;j++){
		sum += j;//here we add the sum with j
		cout<<"fibonacci values are "<<sum<<endl;
	}
	
	
	
}
