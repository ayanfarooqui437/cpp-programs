/*Write a C++ program to create three objects for a class named pntr_obj with
data members such as roll_no&name. Create  a member function set_data() for setting the
data values and a print() member function to print which object has invoked it using the
’this’ pointer.*/

#include <iostream>
#include <string>
using namespace std;
//Class Declaration
class pntr_obj
{
	//Private
    int roll_no;
    string name;
//Public
public:
    void set_data(int roll_no, string name)
    {
        this->roll_no = roll_no;
        this->name = name;
    }

    void print()
    {
        cout << "Object Address: " << this << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "-------------------" << endl;
    }
};

int main()
{
    pntr_obj obj1, obj2, obj3;

    obj1.set_data(101, "Ayan Farooqui");
    obj2.set_data(102, "Syed Ahmed Mustafa");
    obj3.set_data(103, "John");

    obj1.print();
    obj2.print();
    obj3.print();

    return 0;
}

