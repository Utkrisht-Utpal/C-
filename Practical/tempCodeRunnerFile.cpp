#include <iostream>
using namespace std;

#define MAX 5

class stack
{
    int arr[MAX];
    int top;
    
public:
    stack(){
        top = -1;
    }
    
    void push(int d)
    {
    if (top == MAX - 1)
    {
        cout << "Overflow Condition..." << endl;
        return;
    }
        top++;
        arr[top] = d;
}

void pop()
{
    if (top == -1)
    {
        cout << "Underflow Condition..." << endl;
        return;
    }
    cout << arr[top] << " popped out!" << endl;
    top--;
}

void display()
{
    if (top == -1)
    {
        cout << "Underflow Condition..." << endl;
    }
    
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
};

int main()
{
    stack s;
    int choice, value;

    do
    {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}