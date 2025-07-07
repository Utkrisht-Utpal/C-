#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int result = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        result = i;
    }

    if(result == -1)
    {
        cout << "Element not found in the array..." << endl;
    }

    else
    {
        cout << "Element found at index " << result + 1;
    }

    return 0;
}