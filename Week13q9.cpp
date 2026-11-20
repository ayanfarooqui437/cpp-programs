//Queue using Array
#include <iostream>
using namespace std;

#define MAX 5

class Queue
{
    int arr[MAX];
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return (front == -1 || front > rear);
    }

    void enqueue(int value)
    {
        if(rear == MAX - 1)
        {
            cout << "Queue Overflow\n";
            return;
        }

        if(front == -1)
            front = 0;

        arr[++rear] = value;
    }

    void dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue Underflow\n";
            return;
        }

        cout << "Deleted Element: "
             << arr[front++] << endl;
    }

    void showFront()
    {
        if(isEmpty())
            cout << "Queue Empty\n";
        else
            cout << "Front Element: "
                 << arr[front] << endl;
    }

    void showRear()
    {
        if(isEmpty())
            cout << "Queue Empty\n";
        else
            cout << "Rear Element: "
                 << arr[rear] << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.showFront();
    q.showRear();

    q.dequeue();

    q.showFront();

    return 0;
}
