#include<iostream>
using namespace std;
int maximum(int a[], int n){
	if(n == 1){
		return a[0];
	}
	int max = maximum(a, n - 1);
	if(a[n - 1] > max){
		return a[n - 1];
	}
	return max;
}

int minimum(int a[], int n){
	if(n == 1){
		return a[0];
	}
	int min = minimum(a, n - 1);
	if(a[n - 1] < min){
		return a[n - 1];
	}
	return min;
}
//Main Function
int  main(){
	int a[100], num;
	
	cout<<"Enter the Size of the Array:- ";
	cin>>num;
	
	cout<<"Enter the Elements of the Array:- "<<endl;
	for(int i = 0; i < num; i++){
		cout<<"Enter the ["<<i<<"] Element of the Array:- ";
		cin>>a[i];
	}
	
	cout<<"Maximum Element of the Array is "<<maximum(a, num)<<endl;
	cout<<"Minimum Element of the Array is "<<minimum(a, num)<<endl;
	return 0;
}

