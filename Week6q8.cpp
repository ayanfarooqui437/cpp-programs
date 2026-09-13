// Write a program using a pointer variable to the sum of n elements from the array.
#include<iostream>
using namespace std;
int main(){
	int n, sum = 0;
	int *p;
	
	cout<<"Enter the Size of the Array: ";
	cin>>n;
	
	cout<<"Enter the Elements of the Array: ";
	int arr[n];
	for(int i = 0;i<n;i++){
		cout<<' ';
		cin>>arr[i];
	}
	
	cout<<endl;
	p = arr;
	for(int j = 0;j<n; j++){
		sum += *(p+j);
	}
	
	cout<<"The sum of the "<<n<<" elements of the Array is "<<sum<<endl;
	return 0;
}
