#include<iostream>
using namespace std;
void display(int a[], int n, int i){
	if(i == n){
		return;
	}
	cout<<a[i]<<" ";
	display(a, n, i + 1);
}
//Main Function
int main(){
	int a[100], num;
	cout<<"Enter the Size of the Array:- ";
	cin>>num;
	
	cout<<"Enter the Elements of the Array:- "<<endl;
	for(int i = 0; i < num; i++){
		cout<<"Enter the ["<<i<<"] Elements of the Array:- ";
		cin>>a[i];
	}
	cout<<"Elements of the Array:- ";
	display(a,num,0);
	return 0;
}
