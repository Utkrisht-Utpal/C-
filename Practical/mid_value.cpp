//write the program to find the middle value that returns the address of middle value.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int middleIndex = size / 2;
    cout << middleIndex;
    
    cout << "Middle value: " << arr[middleIndex] << endl;
    cout << "Address of middle value: " << &arr[middleIndex] << endl;

    return 0;
}