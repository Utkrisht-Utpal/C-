// write a program to perform insertion sort on no. of elements entered by user.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        int current = i;
        int j = i - 1;
        while (arr[j] > arr[current] && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j] = arr[current];
    }
    
    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}