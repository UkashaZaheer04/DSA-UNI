 #include <iostream>
using namespace std;

int main() {
    int size, specificNumber;

    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the specific number: ";
    cin >> specificNumber;

    cout << "Elements greater than " << specificNumber << " are:\n";
    for (int i = 0; i < size; ++i) {
        if (arr[i] > specificNumber) {
            cout << arr[i] << " ";
        }
    }

    delete[] arr;

    return 0;
}
