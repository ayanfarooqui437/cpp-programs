#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter the Character: ";
	cin>>ch;
	int ascii=ch;
	//Using If-Else Statements
	if (ascii>=65 && ascii<=90){
		//cout<<"Capital Letters!";
	}else if(ascii>=97 && ascii<=122){
		//cout<<"Small Letters!";
	}else if(ascii>=48 && ascii<=57){
		//cout<<"Digit";
	}else{
		//cout<<"Special Symbol"<<endl;
	}
	//Using Switch Case Statements
	switch(ascii){
		case 65 ... 90:
			cout<<"Capital Letter";
			break;
		case 97 ... 122:
			cout<<"Small  Case Letter";
			break;
		case 48 ... 57:
			cout<<"Digit";
			break;
		default:
			cout<<"Special Symbol";
	}
	return 0;
}
