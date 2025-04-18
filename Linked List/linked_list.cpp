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

    cout << "Value " << key << " not found! \n";
}

void deleteAtPosition(int pos) {
    if (head == nullptr) {
        cout << "List is empty! \n";
        return;
    }

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted from position 1 \n";
        return;
    }

    // Traverse to the node just before the one to delete
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    // Check if position is valid
    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position out of range! \n";
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;

    cout << "Deleted from position " << pos << "." << endl;
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
    deleteAtPosition(2);

    cout << "The linked list is: ";
    printlist();


    return 0;
}