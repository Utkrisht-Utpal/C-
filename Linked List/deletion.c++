// write a program to delete a node at the beginning of a linked list.

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

void del() {
    Node* temp = head;
    head = head->next;
    delete temp;
}

void print() {
    Node* temp = head;
    cout << "List is: ";
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
        print();
    }
    cout << "How many numbers you want to delete?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        del();
        print();
    }
    return 0;
}