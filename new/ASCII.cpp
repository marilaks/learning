//to find ASCII
#include<iostream>
using namespace std;

char check(char cha){
	//to check if it is lowercase or uppercase
	if(cha>=65 && cha<=90){
		cout<<"uppercase"<<endl;
	}
	else if (cha>=97 && cha<=122){
		cout<<"lowercase"<<endl;
	}
	else{
		cout<<"enter a valid character"<<endl;
	}
}

int main(){
	char cha;
	cout<<"enter a character"<<endl;
	cin>>cha;
	
	//function to check lower or upper
	check(cha);	
	
	//ASCII value
	cout<<"ASCII value is "<<int(cha);
	return 0;
}
