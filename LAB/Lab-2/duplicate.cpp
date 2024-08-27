#include <iostream>
using namespace std;
int duplicate(int arr[], int size)
{
    int newSize = size;
    for (int i = 0; i < newSize; i++)
    {
        for (int j = i + 1; j < newSize; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < newSize; j++)
                {
                    arr[k] == arr[i];
                }
                newSize--;
                j--;
            }
        }
    }
    return newSize;
}
int main()
{
    int arr[] = {2, 3, 4, 4, 5, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newSize = duplicate(arr, size);
    cout << "After duplicate :";
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}