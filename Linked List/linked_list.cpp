#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = NULL;

void Insert(int value)
{
    Node* newNode = new Node;
    newNode -> data = value;
    newNode -> next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
}

void printlist()
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
    int size, value;

    cout << "Enter the size of linked List: ";
    cin >> size;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " number: ";
        cin >> value;
        Insert(value);
    }

    printlist();
    
    return 0;
}