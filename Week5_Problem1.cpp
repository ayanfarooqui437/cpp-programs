#include <iostream>
using namespace std;
//Main Fucntion
int main() {
	//Declaring Variables and Array
    int n, arr[100];

    cout << "Enter the number of elements: ";
    cin >> n;
    //Entering the elements in the array
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //Displaying the Elements of the Array
    cout << "Array elements are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
