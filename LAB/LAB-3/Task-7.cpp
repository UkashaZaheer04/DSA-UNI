#include <iostream>
using namespace std;
int func(int arr[], int size, int value)
{
    int index = -1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            index = i;
        }
        if (index != -1)
        {
            sum += arr[i];
        }
    }
    if (index != -1)
    {
        return sum;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 7;
    int result = func(arr, size, value);
    if (result != -1)
    {
        cout << "Sum : " << result << endl;
    }
    else
    {
        cout << "Value not found" << endl;
    }
}
