#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pos;
    cout << "Enter the position of the element to be deleted: ";
    cin >> pos;

    for (int i = pos - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Array after deletion: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}