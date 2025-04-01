// // write a program to demonstrate the use of linear search to search a given element in an array.

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ele;
    cout << "Enter the element to search: ";
    cin >> ele;

    int count = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            count = i;
            break;
        }
    }

    if (count == -1)
    {
        cout << "The entered element is not there in the array.";
    }
    else
    {
        cout << "The array is found at " << count + 1 << " position.";
    }
}