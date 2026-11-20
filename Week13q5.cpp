#include <iostream>
#include <string>
using namespace std;

class Publication
{
protected:
    string title;
    string writer;

public:
    void getPublication()
    {
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Writer Name: ";
        getline(cin, writer);
    }

    void displayPublication()
    {
        cout << "\nBook Title : " << title << endl;
        cout << "Writer Name: " << writer << endl;
    }
};

class Sales : public Publication
{
private:
    float month[3];
    float total = 0;

public:
    void getSales()
    {
        for(int i = 0; i < 3; i++)
        {
            cout << "Enter sales for month "
                 << i + 1 << ": ";
            cin >> month[i];

            total += month[i];
        }
    }

    void displaySales()
    {
        displayPublication();

        cout << "\nSales Records:" << endl;

        for(int i = 0; i < 3; i++)
        {
            cout << "Month " << i + 1
                 << " = " << month[i] << endl;
        }

        cout << "Total Sales = "
             << total << endl;
    }
};

int main()
{
    Sales s;

    s.getPublication();
    s.getSales();

    s.displaySales();

    return 0;
}
