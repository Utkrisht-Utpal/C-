#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {11, 15, 2, 6, 8};

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << endl;
    }
}