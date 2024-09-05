#include <iostream>
using namespace std;
int main()
{
    // in ascending order 
     int n = 5;
    int arr[5] = {4, 6, 2, 8, 5};
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                 swap(arr[i],arr[j]);
            }
        }
    }
    cout << "Sorted array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    } 
//    in descending order 
    int n = 5;
    int arr[5] = {4, 6, 2, 8, 5};
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    } 
}