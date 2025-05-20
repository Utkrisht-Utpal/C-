#include <iostream>
using namespace std;

#define MAX 5

class stack
{
    int arr[MAX];
    int top;
    
    public:
    stack()
    {
        top = -1;
    }

    void push(int d)
    {
        if(top == MAX - 1)
        {
            cout << "Overflow Condition..." << endl;
            return;
        }
        
        arr[++top] = d;
    }

    void pop()
    {
        if(top == -1)
        {
            cout << "Underflow..." << endl;
            return;
        }
        
        cout << arr[top] << " Popped!" << endl;
        top--;
    }
    
    void display()
    {
        if(top == -1)
        {
            cout << "Underflow..." << endl;
            return;
        }
        
        for(int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{   
    stack s;
    int d, choice;

    do
    {
    cout << "1. Push" << endl << "2. Pop" << endl << "3. Display" << endl << "4. Exit" << endl;
    cin >> choice;

        switch(choice)
        {
            case 1: 
            {
                cout << "Enter the element to insert in the stack: ";
                cin >> d;
                s.push(d);
                break;
            }
            case 2: 
            {
                s.pop();
                break;
            }
            case 3: 
            {
                s.display();
                break;
            }
            case 4: 
            {
                cout << "Exiting the program...";
                break;
            }
            default:
            {
                cout << "Please enter a valid choice!";
            }
        }
    } while(choice != 4);
} 