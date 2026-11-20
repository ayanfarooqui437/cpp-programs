#include <iostream>
using namespace std;

class Staff
{
protected:
    string name;
    int id;

public:
    void getStaff()
    {
        cout << "Enter Staff Name: ";
        cin >> name;
        cout << "Enter Staff ID: ";
        cin >> id;
    }

    void displayStaff()
    {
        cout << "Name : " << name << endl;
        cout << "ID   : " << id << endl;
    }
};

class Teaching : public Staff
{
public:
    void show()
    {
        cout << "\nTeaching Staff" << endl;
        displayStaff();
    }
};

class NonTeaching : public Staff
{
};

class Regular : public NonTeaching
{
public:
    void show()
    {
        cout << "\nRegular Non-Teaching Staff" << endl;
        displayStaff();
    }
};

class Casual : public NonTeaching
{
public:
    void show()
    {
        cout << "\nCasual Non-Teaching Staff" << endl;
        displayStaff();
    }
};

int main()
{
    Teaching t;
    Regular r;
    Casual c;

    t.getStaff();
    t.show();

    r.getStaff();
    r.show();

    c.getStaff();
    c.show();

    return 0;
}
