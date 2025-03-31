#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* Address;
};

int main() {
    struct Node* head = NULL;
    struct Node* n1 = new Node();
    struct Node* n2 = new Node();
    struct Node* n3 = new Node();

    n1->data = 10;
    (*n2).data = 20;
    n3->data = 30;

    n1->Address = n2;
    n2->Address = n3;
    n3->Address = NULL;
    head = n1;

    struct Node* p = head;

    while (p != NULL) {
        cout << p->data << endl;
        p = p->Address;
    }

    delete n1;
    delete n2;
    delete n3;

    return 0;
}