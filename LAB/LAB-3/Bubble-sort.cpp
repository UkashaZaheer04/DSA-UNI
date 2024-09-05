#include <iostream>
using namespace std;
int main()
{
    // bubble sort
    // In Ascending order 
    /* int n = 5;
    int arr[5] = {4, 6, 2, 8, 5};
    for (int i = n - 1; i >= 0; i--)
    {
    bool iswapped=false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                iswapped=true;
            }
        }
        if(!iswapped){
        break;
      }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    } */
    // In Descending order 
     int n = 5;
    int arr[5] = {4, 6, 2, 8, 5};
    for (int i = n - 1; i >= 0; i--)
    {
        bool iswapped=false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                iswapped=true;
            }
        }
        if(! iswapped)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}