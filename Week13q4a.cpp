#include <iostream>
using namespace std;

class Distance
{
    int meter;

public:
    Distance(int m)
    {
        meter = m;
    }

    void display()
    {
        cout << "Distance = " << meter << " meters" << endl;
    }
};

int main()
{
    int x = 100;

    Distance d = Distance(x);   // Explicit Conversion

    d.display();

    return 0;
}
