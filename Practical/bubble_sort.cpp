#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {56, 2, 23, 4, 18};

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
            if(arr[j + 1] < arr[j])
            {
                swap (arr[j+1], arr[j]);
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