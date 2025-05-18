#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int arr[n];
    
    cout << "Enter the number of elements (max 10):" << endl;
    cin >> n;
    
    cout << "Enter the element of arrays one by one (max 10): " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int present = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            present = i;
        }
    }
    
    if(present == -1)
    {
        cout << "Element not found in the array..." << endl;
    }

    else{
        cout << "Element found at " << present + 1<< " position." << endl;
    }

    return 0;
}