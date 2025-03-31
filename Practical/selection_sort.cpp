#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {1, 3, 4, 7, 80, 2, 15};

    for (int i = 0; i < n - 1; i++)
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
        cout << arr[i];
        cout << endl;
    }
}