#include <iostream>
using namespace std;

#define MAX 10

class Stack{
    public:
    int arr[MAX];
    int top;

    Stack(){
        top = -1;
    }


void push(int d)
{
    if (top == MAX - 1)
    {
        cout << "Stack overflow" << endl;
        return;
    }
    top++;
    arr[top] = d;
    cout << "Pushed to stack: " << d << endl;
}

void pop()
{
    if(top == -1)
    {
        cout << "Stack underflow" << endl;
        return;
    }
    cout << "Popped element is: " << arr[top] << endl;
    top--;
}

void peek()
{
    if(top == -1)
    {
        cout << "The stack is empty" << endl;
        return;
    }
    cout << "Top element is: " << arr[top] << endl;
}

void size()
{
    cout << "The stack is of " << top + 1 << " size." << endl;
}

void display(){
    cout << "Stack Elements are: ";
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
};

int main()
{
    Stack s;

    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(12);
    s.push(14);

    s.display();

    s.pop();
    s.display();
    
    return 0;
}