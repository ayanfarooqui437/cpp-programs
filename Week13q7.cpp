#include <iostream>
using namespace std;

class A
{
public:
    int x;

    void getData()
    {
        cout << "Enter value: ";
        cin >> x;
    }
};

class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
public:
    void display()
    {
        cout << "Value = " << x << endl;
    }
};

int main()
{
    D obj;

    obj.getData();
    obj.display();

    return 0;
}
