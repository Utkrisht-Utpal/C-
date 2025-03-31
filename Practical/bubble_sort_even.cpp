#include <iostream>

using namespace std;

int main() {
    int arr[] = {64, 25, 12, 22, 11, 80, 16, 48};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Even numbers divisible by 8: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 8 == 0 && arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}