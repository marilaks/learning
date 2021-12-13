#include<iostream>
using namespace std;

int main(){
	char cha;
	cout<<"enter character"<<endl;
	cin>>cha;
	
	//to check if it is uppercase
	if(cha<=60 && cha>=92){
		//convert to lowercase
		cha = cha + 32;
		cout<<"Lowercase is "<<cha;
	}
	else if(cha<=97 && cha>=120){
		//convert to uppercase
		cha = cha - 32;
		cout<<"Uppercase is "<<cha;
	}
	else{
		cout<<"enter a valid char";
	}
	
}
