//write a program to print diagonal elements of the matrix

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;
    int arr[n][n];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "The diagonal elements of the matrix are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i][i] << " ";
    }
    return 0;
}