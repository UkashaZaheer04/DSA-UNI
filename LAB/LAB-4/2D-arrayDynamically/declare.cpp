#include<iostream>
using namespace std;
int main ()
{
    int **arr=new int*[rows]
    int rows=5,columns=4;
    for(int i=0;i<rows;i++)
    {
        arr[i]=new int[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin>>arr[i][j];
    }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<arr[i][j];
        }
    }

  return 0;
}