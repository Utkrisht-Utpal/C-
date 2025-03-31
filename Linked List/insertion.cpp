// write a program to insert a node at the beginning of a linked list.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void print() {
    Node* temp = head;
    cout << "Linked List is: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    head = NULL;
    cout << "How many numbers?" << endl;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter the number" << endl;
        cin >> x;
        insert(x);
    }
    print();
    return 0;
}