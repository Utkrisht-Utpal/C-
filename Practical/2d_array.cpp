#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter the number of rows: ";
    cin >> r;
    int c;
    cout << "Enter the number of columns: ";
    cin >> c;
    
    int arr[r][c];

    cout << "Enter the elements of the array: " << endl;
    for(int i=0; i<r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The elements of the array are: " << endl;
    for(int i=0; i<r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}