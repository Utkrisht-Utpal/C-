#include <iostream>
using namespace std;

#define MAX 10

class Stack {
    public:
    int arr[MAX];
    int top;

    Stack (){
        top = -1;
    }

    void push(int d)
    {
        if (top == MAX - 1)
        {
            cout << "Overflow...";
        }
        top++;
        arr[top] = d;
    }

    void pop ()
    {
        if(top == -1){
            cout << "Underflow...";
        }
        cout << "Popped element: " << arr[top];
        top--;
        cout << endl;
    }

    void peak ()
    {
        if(top == -1)
        {
            cout << "The stack is empty...";
        }
        cout << "Top element: " << arr[top];
    }
    
    void display()
    {
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