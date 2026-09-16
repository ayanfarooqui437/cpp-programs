/*Write a C++ program to generate all the prime numbers between 1 and n,
where n is a value supplied by the user.*/

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the Number :- ";
	cin>>num;
	if(num<0){
		cout<<"Invalid Input!"<<endl;
		cout<<"Enter a Positive Number!"<<endl;
	}
	//Condition for num=1
	if(num==1){
		cout<<"1 is Not a Prime Number!"<<endl;
	}
	//Prime Factors
	for(int i=2;i<=num;i++){
		if(num%i==0){
			cout<<"Prime Factors are :- "<<i<<" "<<endl;
		}
	}
	//Counting Prime Numbers
	cout<<"Prime Numbers between 1 and "<<num<<" are ";
	for(int i=2;i<=num;i++){
		int count=0;
		for(int j=2;j<i;j++){
			if(j%i==0){
			count=1;
			break;
			}
		}
		if(count==0){
			cout<<i<<" ";
		}
	}
	return 0;
}
