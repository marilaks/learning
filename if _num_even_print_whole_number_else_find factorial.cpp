#include<iostream>
using namespace std;

int main(){
	int n= 0;
	long long result;
	
	//getting input
	cout<<"enter the number"<<endl;
	cin>>n;
	if(n%2 == 0){
		result = 0;
		
		//loop
		for(int i = 0;i<=n;i++){
			result = result + i;
		}
	
	cout<<"sum of whole numbers"<<result<<endl;
}
	
	else{
		result = 1;int i = 1;
		
		//loop
		while(i != n+1){
			result = result*i;
			i = i+1;
		}
		cout<<"factorail is"<<result<<endl;
	}
	
}
