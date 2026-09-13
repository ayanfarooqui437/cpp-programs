// Write a C++ Program to print the address of the Variable Using a Pointer.
#include<iostream>
using namespace std;
int main(){
	int num, *add;
	
	cout<<"Enter the Number: ";
	cin>>num;
	
	//Address Thing(Logic)
	add = &num;
	
	cout<<"Address of the Given Number is "<<add<<endl;
	
	return 0;
}
