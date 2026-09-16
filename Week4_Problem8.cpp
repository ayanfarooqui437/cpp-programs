#include<iostream>
using namespace std;
int main(){
	int num, original_num, remainder, sum=0;
	cout<<"Enter the Number: ";
	cin>>num;
	original_num=num;
	while(num>0){
		remainder=num%10;
		sum=sum+(remainder*remainder*remainder);
		num=num/10;
	}
	if(sum==original_num){
		cout<<"Armstrong Number!";
	}else{
		cout<<"Not an Armstrong Number!";
	}
	return 0;
}
