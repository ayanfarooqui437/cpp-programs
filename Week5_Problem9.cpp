#include <iostream>
using namespace std;

int main() {
    int n, num, count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter number to find frequency: ";
    cin >> num;

    // Count occurrences
    for (int i = 0; i < n; i++) {
        if (a[i] == num)
            count++;
    }

    cout << "Frequency of " << num << " = " << count;

    return 0;
}

