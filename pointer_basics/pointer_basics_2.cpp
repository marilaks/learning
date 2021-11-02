#include<iostream>
using namespace std;

int rev(int* x,int size){
	int i;
	for(i=size-1;i>=0;i--){
		cout<<x[i]<<" ";
	}
	cout<<x;
}

int main(){
	int arr[] = {1,2,3,4,5,6};
	rev(arr,5);
	
	}
