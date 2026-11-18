#include<iostream>
using namespace std;
int sum(int a[], int n){
	if(n == 0){
		return 0;
	}
	return {a[n - 1] + sum(a, n - 1)};
}
int main(){
	int a[100], num;
	
	cout<<"Enter the Size of Element of the Array:- ";
	cin>>num;
	cout<<"Enter the Elements of the Array:- "<<endl;
	for(int i = 0; i < num; i++){
		cout<<"Enter the ["<<i<<"] Element of the Array:- ";
		cin>>a[i];
	}
	cout<<"Sum of the Elements of the Array:- "<<sum(a,num)<<endl;
	return 0;
}
