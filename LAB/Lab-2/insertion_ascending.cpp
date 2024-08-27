#include <iostream>
using namespace std;
int main()
{
    // in ascending order
      int n = 5;
     int arr[5] = {4, 6, 2, 8, 5};
     for (int i = 1; i < n; i++)
     {
         int j = i - 1;
         int key = arr[i];

         while (j >= 0 && arr[j] > key)
         {
             arr[j + 1] = arr[j];
             j = j - 1;
         }
         arr[j + 1] = key;
     }
     for (int i = 0; i < n; i++)
     {
         cout << arr[i] << " ";
     } 
}