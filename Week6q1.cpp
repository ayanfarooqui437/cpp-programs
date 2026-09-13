//Write a C++ program to Add Two Numbers Using a pointer.
#include<iostream>
using namespace std;
int main(){
	int a,b,sum;
	int *p,*q;
	
	cout<<"Enter the First Number: ";
	cin>>a;
	cout<<"Enter the Second Number: ";
	cin>>b;
	
	p=&a;//p=&a --> Points to address of a
	q=&b;//q=&b --> Points to address of b
	//*p --> Value of a
	//*q --> Value of b
	
	sum = *p + *q;
	cout<<"The Sum of two number is "<<sum<<endl;
	
	return 0;
}
