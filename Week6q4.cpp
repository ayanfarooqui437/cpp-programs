//Write a C++ Program for Increment and Decrement an Integer Using a Pointer
#include<iostream>
using namespace std;
int main(){
	int num;
	int *p;
	
	cout<<"Enter the Number: ";
	cin>>num;
	
	p = &num;
	
	//Increment
	++(*p);//Add then Use
	cout<<"Pre Increment of a Number is "<<*p<<endl;
	(*p)++;//Use then Add
	cout<<"Post Increment of a Number is "<<*p<<endl;
	
	//Decrement
	--(*p);//Subtract then Use
	cout<<"Pre Decrement of a Number is "<<*p<<endl;
	(*p)--;//Use then Subtract
	cout<<"Post Decrement of a Number is "<<*p<<endl;
	
	return 0;
}
