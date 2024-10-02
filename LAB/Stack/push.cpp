#include<iostream>
using namespace std;
int stack[5] ,  top=-1, n=5;
void push(int x)
{
    if (top==n-1){
        cout<<"Stack is full ";
    }
    else{
        top++;
        stack[top]=x;
    }
    cout<<endl;
}
void display()
{
    if (top==-1){
        cout<<"Stack is empty ";
    }
    else {
        cout<<"Stack elements are :";
        for (int i=0;i<=top;i++){
            cout<<stack[i]<<" ";
    }
}
cout<<endl;
}
void pop()
{
    if (top==-1){
        cout<<"Stack is empty";
    }
    else{
         
        cout<<"The pop element is  :"<<stack[top];
        top--;
    }
    cout<<endl;
}
void displayReverse()
{
    if (top==-1){
        cout<<"stack is empty ";
    }
    else {
        cout<<"reverse  elements are :";
        for (int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
    }
}
 cout<<endl;
}
int main ()
{
     push(1);
     push(2);
     push(3);
     push(4);
     push(5);
     display();
     displayReverse();
     pop();
     display();
  return 0;
}