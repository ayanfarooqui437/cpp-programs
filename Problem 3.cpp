//Write a C++ program using pointers to compute the sum, mean and standard deviation of all elements stored in an array of n real numbers.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double arr[100], sum = 0, mean, variance = 0, sd;
    double *p;

    cout << "Enter number of elements: ";
    cin >> n;
    
    p =arr;
    
    for (int i = 0; i < n; i++){
    	cout << "Enter " << i << " real numbers: ";
    	cin >> *(p + i);
	}

    // Calculate sum using pointer
    for (int i = 0; i < n; i++){
    	sum += *(p + i);
	}   

    mean = sum / n;

    // Calculate variance using pointer
    for (int i = 0; i < n; i++)
        variance += (*(p + i) - mean) * (*(p + i) - mean);

    variance = variance / n;
    sd = sqrt(variance);

    cout << "\nSum = " << sum;
    cout << "\nMean = " << mean;
    cout << "\nStandard Deviation = " << sd << endl;

    return 0;
}

