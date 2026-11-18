//Factorial using Recursion
#include<iostream>

using namespace std;

int factorial(int n){
	if(n == 0 || n == 1){
		return 1;
	}else{
		return n * factorial(n - 1);
	}
}

int main(){
	
	int num , result;
	
	cout<<"Enter the Number :- ";
	cin>>num;
	
	if(num < 0){
		cout<<"Invalid Input!!!";
	}else{
		result = factorial(num);
		cout<<"Factorial of the Number is "<<result<<endl;
	}
	return 0;
}
