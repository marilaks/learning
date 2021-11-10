#include<iostream>
using namespace std;
//passing arrays as func arg
int basic(int* A,int size){//we cannot pass array as call by value,only reference is done
	int sum;
	for(int i =0;i<size;i++){
		sum	+= A[i];
	}
	
	cout<<"sum is "<<sum<<endl;
}
//changing the values
int change(int* A, int size){
	int i,sum;
	for(i= 0 ;i<size;i++){
		sum = 2*A[i];
	}
	return sum;
}

int main(){
	int A[] = {1,2,3,4,5,6,7};
	int sum = 0;
	int size = sizeof(A)/sizeof(A[0]);
	cout<<"Given Array size is "<<size<<endl;
	basic(A,size);
	change(A,size);
	cout<<"changed value is "<<sum<<" "<<endl;
}
