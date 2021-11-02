#include<iostream>
using namespace std;

int main(){
	int i;
	int arr[i];
	int large = 0,sec = 0,size = 0;
	
	//getting size
	cout<<"enter the size of array"<<endl;
	cin>>size;
	
	cout<<"enter "<<size<<" elements"<<endl;
	
	//input from user
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	//largest element
	for(int i=0;i<size;i++){
		if(arr[i]<arr[i+1])
		{
			large = arr[i+1];
		}
		else
			large = arr[i];	
	}
	cout<<"first largest element "<<large<<endl;
	
	//second largest
	for(int i=0;i<size;i++){
		if(arr[i]<arr[i+1]){
				if(arr[i+1]<large){
					sec = arr[i+1];
				}
		}
		else if(arr[i]<large){
				sec	= arr[i];
		}
	}
	cout<<"second largest element "<<sec<<endl;
	//sum of two elements
	cout<<"sum of first and sec largest elements is "<<large+sec<<endl;
}
