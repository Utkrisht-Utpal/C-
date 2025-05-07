#include <iostream>
using namespace std;

int main ()
{
    int n = 5;
    int arr[n] = {56, 12, 71, 33, 9};

    for(int i = 0; i < n; i++)
    {
        int minindex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap (arr[i], arr[minindex]);
    }
    
        for (int i = 0; i < n; i++)
        {
        cout << arr[i] << endl;
        }
            
    return 0;
}