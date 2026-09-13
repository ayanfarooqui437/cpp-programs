/*Write a program for reading elements using a pointer into an array and dis-
play the values using an array. i. Declare a set Of elements. ii. Declare the pointer and
initialize it to the first element's address of a set of elements(array). iii. Repeat the loop
until the pointer reaches to the last element and displays each element*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the Size of the Array: ";
	cin>>n;
	int arr[n];//Declare a set Of elements
	int *p;
	
	p=arr;//Declare the pointer and initialize it to the first element's address of a set of elements(array).
	cout<<"Enter the "<<n<<" Elemnets of the Array: "<<endl;
	for(int i=0;i<n;i++){
		cin>>*(p+i);//Read the Elements using Pointers
	}
	cout<<"Displaying the Elements of the Array: ";
	for(int i=0;i<n;i++){
		cout<<' ';
		cout<<arr[i];//Displaying the Elements
	}
	
	return 0;
}
