// Write a C++ Program for the Length of a String Using a Pointer.
#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char *p;
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    p = str;

    while (*p != '\0')
    {
        length++;
        p++;
    }

    cout << "Length of string = " << length;

    return 0;
}

