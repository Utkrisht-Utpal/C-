#include <iostream>
using namespace std;

int main()
{

    int n;
    n = 5;
    // cout << "Enter the size of the array: ";
    // cin >> n;

    int arr[n] = {56, 24, 2, 4, 18};

    // int arr[n];
    // cout << "Enter the elements of the array: ";
    // for(int i = 0; i < n; i++)
    // {
    // cin >> arr[i];
    // }

    for(int i = 0; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        
        while(j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    cout << "Sorted array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}