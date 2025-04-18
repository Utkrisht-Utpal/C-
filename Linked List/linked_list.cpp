#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = NULL;

void push(int d)
{
    Node* newNode = new Node;
    newNode -> data = (d);
    newNode -> next = NULL;
    
    if(head == NULL)
    {
        head = newNode;
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

void printlist()
{    
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

void search(int key) {
    Node* temp = head;
    int position = 1;

    while (temp != nullptr) {
        if (temp->data == key) {
            cout << "Value " << key << " found at position " << position << "." << endl;
            return;
        }
        temp = temp->next;
        position++;
    }

    cout << "Value " << key << " not found ❌\n";
}

int main(){

    int size, d;
    cout << "Enter the size of linked list: ";
    cin >> size;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter the data of node " << i + 1 << " : ";
        cin >> d;
        push(d);
    }

    search(4);

    cout << "The linked list is: ";
    printlist();


    return 0;
}