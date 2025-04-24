#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int d)
{
    Node* newNode = new Node;
    newNode -> data = d;
    newNode -> next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    else{
        Node* temp = head;
        while(temp -> next != NULL)
        {
        temp = temp -> next;
        }
        temp -> next = newNode;
    }
}

void search(int key)
{
    int position = 1;

    if (head == NULL)
    {
        cout << "The linked list is empty!";
        return;
    }

    else
    {
        Node* temp = head;
        while(temp != NULL)
        {
            if (temp -> data == key)
            {
                cout << "Value found at " << position << endl;
                return;
            }
            temp = temp -> next;
            position++;
        }
        cout << "Value not found in the linked list...";
    }
}

void print ()
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    int d, key;
    int ch;

    while(true){
    cout << "Select an operation: " << endl;
    cout << "1. Insert a value" << endl;
    cout << "2. Search a value" << endl;
    cout << "3. Print the linked list" << endl;
    cout << "4. Exit" << endl;
    cin >> ch;

    switch(ch)
    {
        case 1: {
            cout << "Enter the value you want to insert: ";
            cin >> d;
            insert(d);
            break;
        }

        case 2: {
            cout << "Enter the value you want to search: ";
            cin >> key;
            search(key);
            break;
        }

        case 3: {
            print();
            break;
        }

        case 4: {
            cout << "Exiting the program...";
            return 0;
        }

        default:
            cout << "Enter a valid choice!" << endl;
    }
}   
    return 0;
}