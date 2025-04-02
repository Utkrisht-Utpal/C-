#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pos;
    cout << "Enter the position at which you want to enter the element: ";
    cin >> pos;
    
    int ele;
    cout << "Enter the element want to enter: ";
    cin >> ele;

    pos--;

    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = ele;
    n++;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}