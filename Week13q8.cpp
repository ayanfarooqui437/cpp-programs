//Stack Using Array
#include <iostream>
using namespace std;

#define MAX 5

class Stack
{
    int arr[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void push(int value)
    {
        if(top == MAX - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }

        arr[++top] = value;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Deleted Element: "
             << arr[top--] << endl;
    }

    void peek()
    {
        if(isEmpty())
            cout << "Stack Empty\n";
        else
            cout << "Top Element: "
                 << arr[top] << endl;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();

    s.pop();

    s.peek();

    return 0;
}
