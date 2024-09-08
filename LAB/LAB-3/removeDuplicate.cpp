#include <iostream>
using namespace std;

int remove(int arr[], int size) {
    if (size == 0) return 0;

    int uniqueIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[uniqueIndex]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }
    return uniqueIndex + 1;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int newSize = remove(arr, size);

    for (int i = 0; i < newSize; i++) {
        cout << arr[i] ;
    }

    return 0;
}
