// // write a program to demonstrate the use of linear search to search a given element in an array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ele;
    cout << "Enter the element to search: ";
    cin >> ele;

    bool ispresent = false;
    int result = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            ispresent = true;5
            result = i;
        }
    }

    if (ispresent == false)
    {
        cout << "Element not found in the array";
    }

    else{
        cout << "Element found at position. " << result + 1;
    }

    return 0;
}