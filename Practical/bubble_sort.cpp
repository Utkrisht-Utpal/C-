#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {56, 2, 23, 4, 18};

    for (int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n - i - 1; j++)
        {
            if(arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}