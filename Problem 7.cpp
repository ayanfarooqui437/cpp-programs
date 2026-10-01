//Write a C++ program to use this pointer and return the pointer reference.
#include <iostream>
using namespace std;

class Demo
{
    int value;

public:
    Demo(int value)
    {
        this->value = value;
    }

    Demo* getObject()
    {
        return this;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Demo obj(100);

    Demo *ptr;

    ptr = obj.getObject();

    cout << "Object value using returned pointer: ";
    ptr->display();

    cout << "Address of object: " << &obj << endl;
    cout << "Address returned by this pointer: " << ptr << endl;

    return 0;
}

