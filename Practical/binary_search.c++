#include <iostream>
using namespace std;

int main()
{
    int n, ele;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements in ascending order:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> ele;

    int result = -1;
    int start = 0;
    int end = n - 1;
    int mid;

        while (start <= end)
        {
            mid = (start + end) / 2;
            
            if (arr[mid] == ele)
            {
                result = mid;
                break;
            }

            else if (ele > arr[mid])
            {
                start = mid + 1;
            }

            else if (ele < arr[mid])
            {
                end = mid - 1;
            }
        }

    if (result == -1)
    {
        cout << "Element not found in this array.";
    }
    else
    {
        cout << "Element found at " << result + 1 <<" position.";
    }

    return 0;
}