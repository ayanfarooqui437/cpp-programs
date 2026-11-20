#include <iostream>
using namespace std;

class Number1
{
private:
    int value1, value2;

public:
    // Constructor
    Number1(int a, int b)
    {
        value1 = a;
        value2 = b;
    }

    // Friend Functions
    friend int operator+(Number1 obj);
    friend int operator-(Number1 obj);
    friend int operator*(Number1 obj);
    friend int operator/(Number1 obj);
};

// Addition
int operator+(Number1 obj)
{
    return obj.value1 + obj.value2;
}

// Subtraction
int operator-(Number1 obj)
{
    return obj.value1 - obj.value2;
}

// Multiplication
int operator*(Number1 obj)
{
    return obj.value1 * obj.value2;
}

// Division
int operator/(Number1 obj)
{
    return obj.value1 / obj.value2;
}

int main()
{
    Number1 n(20, 10);

    cout << "Addition = " << +n << endl;
    cout << "Subtraction = " << -n << endl;
    cout << "Multiplication = " << *n << endl;
    cout << "Division = " << /n << endl;

    return 0;
}
