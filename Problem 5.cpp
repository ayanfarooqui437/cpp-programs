/* Develop a C++ program to find the greatest of two numbers using this pointer,
which returns the member variable.*/
#include <iostream>
using namespace std;

class Greatest
{
    int a, b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    int greatest()
    {
        if (this->a > this->b)
            return this->a;
        else
            return this->b;
    }
};

int main()
{
    Greatest obj;
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    obj.setData(x, y);

    cout << "Greatest number = " << obj.greatest() << endl;

    return 0;
}

