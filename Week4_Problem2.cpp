#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the value of a:- ";
	cin>>a;
	cout<<endl;
	cout<<"Enter the value of b:- ";
	cin>>b;
	cout<<endl;
	
	while(b!=0){
		int carry = a&b;    
		a = a^b;
		b = carry << 1;
	}
	
	cout << "Sum: " << a;
	return 0;
}
