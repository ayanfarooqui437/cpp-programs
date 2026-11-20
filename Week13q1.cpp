/* Declare a class Number that contains two data members valuel and value2
of the type of integer, define a constructor to give an initial value, and perform addition,
subtraction, multiplication and division of these two numbers usingoperating overloading
of f, - *, / operator respectively [hint- binary operator overloading using member function]*/
#include <iostream>
using namespace std;

class Number
{
private:
    int value1, value2;

public:
    // Constructor
    Number(int a, int b)
    {
        value1 = a;
        value2 = b;
    }

    // Addition
    int operator+()
    {
        return value1 + value2;
    }

    // Subtraction
    int operator-()
    {
        return value1 - value2;
    }

    // Multiplication
    int operator*()
    {
        return value1 * value2;
    }

    // Division
    int operator/()
    {
        return value1 / value2;
    }
};

int main()
{
    Number n(20, 10);

    cout << "Addition = " << +n << endl;
    cout << "Subtraction = " << -n << endl;
    cout << "Multiplication = " << *n << endl;
    cout << "Division = " << /n << endl;

    return 0;
}
