/*Write a program for reading elements using a pointer into the array and dis-
play the values using an array.*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char name[100];
	char *p;
	
	cout<<"Enter the Name of the Person: ";
	cin.getline(name,100);
	
	p = name;
	int length = strlen(name);
	cout<<"Re-Enter the Name: ";
	for(int i=0;i<length;i++){
		cin>>*(p+i);
	}
	cout<<endl;
	cout<<"Displaying the Name of the Person: ";
	for(int i=0;i<length;i++){
		cout<<name[i];
	}
	return 0;
}
