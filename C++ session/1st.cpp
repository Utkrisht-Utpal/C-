#include <iostream>
using namespace std;


// //make an function to take input in the array and then make a function to traverse it and print the elements of the array

// void input(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// }

// void traverse(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements of the array: ";

//     input(arr, n);
//     cout << "The elements of the array are: ";
//     traverse(arr, n);
//     return 0;
// }


// code for printing the coloured text
// int main ()
// {
//     cout << "\033[38;5;220mThis is a gold-coloured text!\033[0m" << endl;
//     cout << "\033[38;5;196mThis is a red-coloured text!\033[0m" << endl;
//     cout << "\033[38;5;202mThis is a orange-coloured text!\033[0m" << endl;
//     cout << "\033[38;5;208mThis is a yellow-coloured text!\033[0m" << endl;
//     cout << "\033[38;5;154mThis is a light green-coloured text!\033[0m" << endl;
//     cout << "\033[38;5;118mThis is a green-coloured text!\033[0m" << endl;
//     cout << "\033[38;5;27mThis is a blue-coloured text!\033[0m" << endl;
//     cout << "\033[38;5;21mThis is a dark blue-coloured text!\033[0m" << endl;
//     cout << "\033[38;5;57mThis is a purple-coloured text!\033[0m" << endl;
//     cout << "\033[38;5;93mThis is a pink-coloured text!\033[0m" << endl;
//     cout << "\033[38;5;231mThis is a white-coloured text!\033[0m" << endl;
//     cout << "\033[38;5;0mThis is a black-coloured text!\033[0m" << endl;

//     return 0;
// }

//array insertion

// int main ()
// {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "The elements of the array are: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// array searching

// int main()
// {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "The elements of the array are: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     int key;
//     cout << "\nEnter the element you want to search: ";
//     cin >> key;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             cout << "Element found at index " << i << endl;
//             break;
//         }
//     }

//     return 0;
// }

//bubble short
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nThe sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}