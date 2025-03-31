// write a program to search an element from an array, also print the frequency of each element.

#include <iostream>
using namespace std;

int main()
{
    int n, key, count = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Element not found in the array." << endl;
    }
    else
    {
        cout << "Element found in the array." << endl;
        cout << "Frequency of the element is: " << count << endl;
    }
    return 0;
}