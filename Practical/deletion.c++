#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int pos;
    cout << "Enter the position of the element to be deleted: ";
    cin >> pos;


    for(int i = pos - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;

    cout << "Array after deletion: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}