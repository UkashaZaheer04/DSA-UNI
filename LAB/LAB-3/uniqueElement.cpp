#include <iostream>
using namespace std;
void count(int arr[], int size)
{
    int count = 1;
    for (int i = 1; i <= size; i++)
    {
        if (i < size && arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            cout << arr[i - 1] << " occurs " << count << " times" << endl;
            count = 1;
        }
    }
}
int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    count(arr, size);
    return 0;
}
