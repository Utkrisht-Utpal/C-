// // write a program to demonstrate the use of binary search to search a given element in a sorted array that is declared in ascending order.

#include <iostream>
using namespace std;

int main()
{
    int n, Sle;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements in ascending order:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> Sle;

    int mid, st = 0, end = n - 1;
    int result = -1;

    while (st <= end)
    {
        mid = (st + end)/2;
        if (Sle == arr[mid])
        {
            result = mid;
            break;
        }
        else if (Sle < arr[mid])
        {
            end = mid - 1;   
        }
        else
        {
            st = mid + 1;            
        }
    }

    if (result == -1)
    {
        cout << "Element not found in this array.";
    }
    else
    {
        cout << "Element found at " << result + 1 <<" position.";
    }

    return 0;
}