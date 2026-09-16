#include<iostream>
using namespace std;
int main(){
	int num;
	//Entering the Value
	cout<<"Enter the Number :- ";
	cin>>num;
	//Input Validation
	if(num<0){
		cout<<"Invalid Input!"<<endl;
		cout<<"Enter a Positive Value!"<<endl;
	}
	//Ternary Operator
	(num%2==0)? cout<<"Even Number!" : cout<<"Odd Number!"<<endl;
	return 0;
}
