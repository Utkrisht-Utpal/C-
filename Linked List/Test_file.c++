#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

void create(int value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;
    while (temp -> next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void delete () {

}

void print()
{
    if (head == NULL)
    {
        cout << "Underflow...";
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int n, data;
    int count = 0;
    int index = 1;

    cout << "Enter the length of Linked List: ";
    cin >> n;

    while (count < n)
    {
        cout << "Enter the data of the " << count + 1 << " position: ";
        cin >> data;
        create(data);

        count++;
    }

    bool iprint;

    cout << "Want to print your Linked List? (1 for yes and 0 for no) ";
    cin >> iprint;

    if (iprint == true)
    {
        print();
    }
    
    else
    {
        cout << "Thank you for entering the data in Linked List";
    }

    return 0;
}