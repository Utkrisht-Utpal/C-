#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {56, 24, 2, 4, 18};

    for (int i = 0; i < n; i++)
    {
        int minterm = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minterm])
            {
                minterm = j;
            }
        }
        swap(arr[i], arr[minterm]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}