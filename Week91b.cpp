//Factorial without using Recursion
#include<iostream>
using namespace std;

int factorial(int n){
	int fact = 1;
	if(n == 0 || n == 1){
		return 1;
	}else{
		for(int i = 1; i <= n; i++){
			fact = fact * i;
		}
		return fact;
	}
	
}
int main(){
	int num, result;
	cout<<"Enter the Number:- ";
	cin>>num;
	
	if(num < 0){
		cout<<"Invalid Input!!!"<<endl;
	}else{
		result = factorial(num);
		cout<<"Factorial of the Number is "<<result<<endl;
	}
	return 0;
	
}
