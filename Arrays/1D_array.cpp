#include <iostream>
using namespace std;


// insertion of array

// int main()
// {
//     int pos, ele, n;

//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     int array[n];

//     cout << "Enter the elements of array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     cout << "The elements that you entered are: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i];
//         cout << endl;
//     }

//     cout << "Enter the position that you want to insert in the array: ";
//     cin >> pos;
//     cout << "Enter the element that you want to enter at " << pos << " position: ";
//     cin >> ele;

//     for (int i = n; i >= pos; i--)
//     {
//         array [i] = array [i - 1];
//     }
//     array[pos - 1] = ele;
//     n++;

//     cout << "The updated array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i];
//         cout << endl;
//     }
// }

//deletion of array

// int main()
// {
//     int del, n;

//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     int array[n];

//     cout << "Enter the elements of array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     cout << "The elements that you entered are: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i];
//         cout << endl;
//     }

//     cout << "Enter the position whose element you want to delete: ";
//     cin >> del;

//     for (int i = del - 1; i < n - 1; i++)
//     {
//         array [i] = array [i + 1];
//     }
//     n--;

//     cout << "The updated array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i];
//         cout << endl;
//     }
// }

//linear search

// int main ()
// {
//     int n;
//     cout << "Enter the array size: ";
//     cin >> n;
//     int array[n];

//     cout << "Enter the elements of array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     cout << "The elements of array are: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i];
//         cout << endl;
//     }

//     int i, ele;

//     cout << "Enter the element to search: ";
//     cin >> ele;

//     for (i = 0; i < n; i++)
//     {
//         if ( array[i] == ele)
//         {
//             cout << "Element found at: " << i + 1 << " Position";
//             break;
//         }
//     }
//     if (i == n)
//     {
//         cout << "Element not found.";
//     }
// }

//binary search

int main ()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    int array[n];

    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "The elements of array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
        cout << endl;
    }
    
    int ele;
    cout << "Enter the element that you want to search: ";
    cin >> ele;

    int l, r, mid;
    l = 0;
    r = n - 1;
    mid = (l + r)/2;

    for (int i = 0; i < n; i++)
    {
        if (mid < ele)
        {
            l = mid + 1;
            break;
        }
        else if (mid > ele)
        {
            r = mid - 1;
            break;
        }
        else if (mid = ele)
        {
            cout << "Element found at: " << mid - 1;
            break;
        }
    }
}