#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = NULL;

void Insert(int d){
    Node* newNode = new Node;
    newNode -> data = d;
    newNode -> next = NULL;

    if(head == NULL){
        head = newNode;
    }
    else{
        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
}

void print()
{
    Node* temp = head;
    if (head == NULL)
    {
        cout << "The List is empty..." << endl;
        return;
    }
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    int size, d;

    cout << "Enter the size of the linkedlist: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " value: ";
        cin >> d;
        Insert (d);
    }
    
    print();

    return 0;
}