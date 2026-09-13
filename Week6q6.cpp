//Write a C++ program to concatenate two strings using pointers.
#include<iostream>
using namespace std;
int main(){
	char fname[100], lname[100], concat[100];
	char *p, *q, *r;
	
	cout<<"Enter the First Name: ";
	cin.getline(fname,100); //Read the Entire Name including spaces
	
	cout<<"Enter the Last Name: ";
	cin.getline(lname,100); //Read the Entire Name including spaces
	
	p = fname;
	q = lname;
	r = concat;
	//Copying the First Name into concat
	while(*p !='\0'){
		*r = *p;
		r++;
		p++;	
	}
	//Adding the Space between Names
	*r = ' ';
	r++;
	//Copying the Last Name into concat
	while(*q !='\0'){
		*r = *q;
		r++;
		q++;	
	}
	//Null terminates the Concatenated String
	*r='\0';
	//Printing the Concatenated String
	cout<<"The Concatenated String is "<<concat<<endl;
	
	return 0;
}
