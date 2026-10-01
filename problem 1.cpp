//Write a C++ Program to Count vowels in a String Using a Pointer
#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char *p;
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    p = str;

    while (*p != '\0')
    {
        if (*p == 'a' || *p == 'e' || *p == 'i' ||
            *p == 'o' || *p == 'u' ||
            *p == 'A' || *p == 'E' || *p == 'I' ||
            *p == 'O' || *p == 'U')
        {
            count++;
        }

        p++;
    }

    cout << "Number of vowels = " << count;

    return 0;
}

