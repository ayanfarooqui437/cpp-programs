//Write a C++ program to print the transpose of a given matrix using a function.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void transpose(vector<vector<int> >& matrix){
	int n = matrix.size();
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			swap(matrix[i][j], matrix[j][i]);
		}
	}
}

int main(){
	int num;
	
	cout<<"Enter the size of Matrix (N x N) :- ";
	cin>>num;
	
	vector<vector<int> > matrix(num, vector<int>(num));
	
	cout<<"Enter the Elements of the Matrix :- "<<endl;
	for(int i = 0; i < num; i++){
		
		for(int j = 0; j < num; j++){
			cout<<"Enter the ["<<i<<"]["<<j<<"] Element of the Matrix :- ";
			cin >> matrix[i][j];
		}
	}
	
	cout<<"Elements of the Matrix:- "<<endl;
	for(int i = 0; i < num; i++){
		cout<<"[ ";
		for(int j = 0; j < num; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"]"<<endl;
	}
	
	transpose(matrix);
	
	cout<<"Transpose of the Matrix:- ";
	cout<<endl;
	for(int i = 0; i < num; i++){
		cout<<"[ ";
		for(int j = 0; j < num; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"]";
		cout<<endl;
	}
	
	return 0;
}
