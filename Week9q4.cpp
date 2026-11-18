#include<iostream>
using namespace std;

void swap_value(int a, int b){
	int temp = a;
	a = b;
	b = temp;
	cout<<"After Swapping = "<<a<<" & "<<b<<endl;
} 
void swap_reference(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int num1, num2, choice;
	
	cout<<"Enter the First Number:- ";
	cin>>num1;
	
	cout<<"Enter the Second Number:- ";
	cin>>num2;
	
	cout<<"You Have Two Choices:- 1. Call By Value 2. Call By Reference"<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
			swap_value(num1, num2);
			cout<<"Original Swapping = "<<num1<<" & "<<num2<<endl;
			break;
		case 2:
			swap_reference(num1, num2);
			cout<<"After Swapping = "<<num1<<" & "<<num2<<endl;
			break;
		default:
			cout<<"INVALID INPUT!!!"<<endl;
	}
	return 0;
}
