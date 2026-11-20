#include <iostream>
using namespace std;

class Number3
{
private:
    int value;

public:
    // Constructor
    Number3(int v)
    {
        value = v;
    }

    // Unary Minus
    void operator-()
    {
        value = -value;
    }

    // Increment
    void operator++()
    {
        ++value;
    }

    // Decrement
    void operator--()
    {
        --value;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Number3 n(10);

    cout << "Original ";
    n.display();

    -n;
    cout << "After Unary Minus ";
    n.display();

    ++n;
    cout << "After Increment ";
    n.display();

    --n;
    cout << "After Decrement ";
    n.display();

    return 0;
}
