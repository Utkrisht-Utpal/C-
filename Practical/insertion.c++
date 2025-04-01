// write a program to do insertion in array.

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int element, position;
    cout << "Enter the element to be inserted: ";
    cin >> element;
    cout << "Enter the position at which the element is to be inserted: ";
    cin >> position;

    for (int i = size; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element;
    size++;

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}