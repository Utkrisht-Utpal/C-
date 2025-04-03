#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {56, 24, 2, 4, 18};

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            }
        }
    }

    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}