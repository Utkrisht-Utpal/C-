#include <iostream>
using namespace std; 

struct Node{
    int data;
    Node* next;
};

void printlist(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main ()
{
    int n;
    cout << "How many nodes do you want in your linked list: ";
    cin >> n;

    int value;
    cout << "Enter the value for node 1: ";
    cin >> value;

    Node* Head = new Node();
    Head -> data = value;
    Head -> next = NULL;

    Node* temp = Head;

    for(int i = 2; i <= n; i++)
    {
        int value;
        cout << "Enter the value for node " << i << " : ";
        cin >> value;

        Node* newNode = new Node();
        newNode -> data = value;
        newNode -> next = NULL;

        temp-> next = newNode;
        temp = newNode;
    }

    printlist(Head);

    return 0;
}