#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {56, 12, 71, 2, 8};

    for (int i = 1; i <= n; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (j >= 0 && current < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}