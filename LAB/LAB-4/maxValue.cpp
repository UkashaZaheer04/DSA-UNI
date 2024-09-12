#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int** array = new int*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        int maxVal = array[i][0];
        for (int j = 1; j < cols; j++) {
            if (array[i][j] > maxVal) {
                maxVal = array[i][j];
            }
        }
        cout << maxVal << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
