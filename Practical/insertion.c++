#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ele;
    cout << "Enter the element you want to insert: ";
    cin >> ele;

    int pos;
    cout << "Enter the position at which you want to insert the element: ";
    cin >> pos;

    for (int i = n; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = ele;
    n++;
    
    cout << "The array elements are: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}