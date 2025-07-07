#include <iostream>
using namespace std;

int main()

{   int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements one by one: "
    for(int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin << arr[i];
    }

    for(int i; i < n; i++)
    {
        int minindex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[minindex] > arr[j])
            {
                
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    retrun 0;
}