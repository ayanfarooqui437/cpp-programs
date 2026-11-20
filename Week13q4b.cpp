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

    operator int()
    {
        return meter;
    }
};

int main()
{
    Distance d(150);

    int x = (int)d;   // Explicit Conversion

    cout << "Distance = " << x << " meters";

    return 0;
}
