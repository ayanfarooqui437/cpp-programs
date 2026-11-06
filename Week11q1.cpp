/* Write a program in C++ to display your name, Branch, and Year on the com-
puter screen without using classes and objects. All information should bedisplayed in a
separate line.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	string name, branch;
	int year;
	
	cout<<"Enter your Name:- ";
	getline(cin, name);
	
	cout<<"Enter the Branch Name:- ";
	getline(cin, branch);
	
	cout<<"Enter the Year of Joining:- ";
	cin>>year;
	
	cout<<"================PERSON'S DETAILS============="<<endl;
	cout<<"Name:- "<<name<<endl;
	cout<<"Branch:- "<<branch<<endl;
	cout<<"Year:- "<<year<<endl;
	
	return 0;
}
