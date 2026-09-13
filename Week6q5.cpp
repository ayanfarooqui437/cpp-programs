//Write a C++ Program to Print a String Using a Pointer.
#include<iostream>
using namespace std;
int main(){
	char name[100];             //Initializing the array with size 100
	char *p;
	
	cout<<"Enter the Name of the Person: ";
	
	cin.getline(name,100);     //read the Entire name even spaces 
	cout<<endl;
	
	p = name;                 //Pointer points to the first element of the Name
	cout<<"The Name of the Person is ";
	while(*p != '\0'){        //Will print the entire name using pointers
		cout<<*p;            //Accessing each Letter of the Name
		p++;                 //Increasing the value of each for next iteration
	}
	
	return 0;
}
