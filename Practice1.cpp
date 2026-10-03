#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the Number: ";
	cin>>num;
	
	if(num>0){
		cout<<"Number is "<<num<<endl;
		cout<<"Number is Positive."<<endl;
	}else if(num == 0){
		cout<<"Number is Zero."<<endl;
	}else{
		cout<<"Number is Negative."<<endl;
	}
	//Ternary Operator
	(num%2)==0? cout<<"Even": cout<<"Odd";
	return 0;
}
