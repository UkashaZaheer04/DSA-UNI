#include <iostream>
using namespace std;

void search(int arr[], int size, int num)
{
    int i;
    bool found = false;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            cout << "Element is present at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Element is not present in array" << endl;
    }
}

int main()
{
    int num;
    cout << "Enter the number to search: ";
    cin >> num;
    
    int arr[] = {2, 5, 7, 9, 1};
    int size = 5;
    
    search(arr, size, num);
    
    return 0;
}
