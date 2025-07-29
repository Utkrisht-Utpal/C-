#include <iostream>
using namespace std;


int main()
{
    int n = 7;
    int arr[n] = {4, 15, 99, 101, 34, 56, 7};

    int key;
    int result = -1;

    cout << "Enter the element to search in this array: ";
    cin >> key;

    for(int i = 0; i < n; i++){
        if (arr[i] == key){
            result = i;
        }
    }

    if (result >= 0){
        cout << "Element found at " << result + 1<< " position.";
    }

    else{
        cout << "Element not found in this array!";
    }

    return 0;
}