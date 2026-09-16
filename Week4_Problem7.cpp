#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a, b, c, d,root,root1,root2;
	cout<<"Enter the value of a:- ";
	cin>>a;
	cout<<endl;
	cout<<"Enter the value of b:- ";
	cin>>a;
	cout<<endl;
	cout<<"Enter the value of c:- ";
	cin>>c;
	//Discriminant
	d = b*b - 4*a*c;
	if(d>0){
	//Root1
	root1=(-b+sqrt(d))/2*a;
	//Root2
	root2=(-b-sqrt(d))/2*a;
	cout<<"First Root is "<<root1<<endl;
	cout<<"Second Root is "<<root2<<endl;
	cout<<"Distinct Roots!"<<endl;
	}else if(d==0){
		root=-b/2*a;
		cout<<"First Root is "<<root<<endl;
		cout<<"Second Root is "<<root<<endl;
		cout<<"Common Roots!"<<endl;	
	} else{
		cout<<"Imaginary Roots!"<<endl;
	}
	return 0;
}
