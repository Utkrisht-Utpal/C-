#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 5, 6, 9};

    int ele;
    cin >> ele;

    bool found = false;
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == ele)
        {
            found = true;
            cout << "Element found at position: " << i+1;
            break;
        }
    }

    if(found == false)
    {
        cout << "Element not found." << endl;
    }

    return 0;
}