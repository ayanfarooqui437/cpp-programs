#include <iostream>
#include <climits>
using namespace std;
//Main Function
int main() {
    int n, arr[100];
    int largest = INT_MIN;//INT_MIN --> the smallest possible value that an int can store.
    int secondLargest = INT_MIN;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        cout << "Second-largest element does not exist." << endl;
    else
        cout << "Second-largest element = " << secondLargest << endl;

    return 0;
}
