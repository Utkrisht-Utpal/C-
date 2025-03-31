//write a program to search minimum and maximum number using linear search.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minVal = arr[0], maxVal = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << "Minimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;

    return 0;
}
