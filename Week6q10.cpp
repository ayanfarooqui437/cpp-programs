//Write a C++ program to reverse a string using pointers.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char name[100];
	char *p;
	
	cout<<"Enter the Name: ";
	cin.getline(name,100);
	
	p = name;
	
	int length = strlen(name);
	cout<<"Original String is "<<name<<endl;
	cout<<"Reversed String is ";
	for(int i=length-1;i>=0 ;i--){
		cout<<*(p+i);
	}
	return 0;
}
