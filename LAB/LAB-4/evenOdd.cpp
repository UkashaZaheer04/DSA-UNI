#include <iostream>
using namespace std;

int main() {
    int rows, cols, evenCount = 0, oddCount = 0;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int** arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }

    // First pass: Count even and odd numbers
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    int* evenArr = new int[evenCount];
    int* oddArr = new int[oddCount];

    int evenIndex = 0, oddIndex = 0;

    // Second pass: Fill even and odd arrays
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] % 2 == 0) {
                evenArr[evenIndex++] = arr[i][j];
            } else {
                oddArr[oddIndex++] = arr[i][j];
            }
        }
    }

    cout << "Even numbers: ";
    for (int i = 0; i < evenCount; ++i) {
        cout << evenArr[i] << " ";
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int i = 0; i < oddCount; ++i) {
        cout << oddArr[i] << " ";
    }
    cout << endl;

    delete[] evenArr;
    delete[] oddArr;
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
