//Write a C++ Example Program for swapping numbers Using Pointers.
#include<iostream>
using namespace std;
int main(){
	int num1, num2 , temp;
	int *p, *q;
	
	cout<<"Enter the First Number: ";
	cin>>num1;
	
	cout<<"Enter the Second Number: ";
	cin>>num2;
	
	cout<<"Before Swapping the Numbers are: "<<endl;
	cout<<"Number 1 is "<<num1<<endl;
	cout<<"Number 2 is "<<num2<<endl;
	
	p=&num1;
	q=&num2;
	
	//Swapping Things(Logic)
	temp = *p;
	*p = *q;
	*q = temp;
	
	cout<<"After Swapping the Numbers are: "<<endl;
	cout<<"Number 1 is "<<num1<<endl;
	cout<<"Number 2 is "<<num2<<endl;
	
	return 0;
}
