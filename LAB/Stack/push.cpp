/* #include<iostream>
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
} */
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;  // Pointer to the top of the stack

public:
    Stack() {
        top = nullptr;  // Stack is initially empty
    }

    bool isEmpty() {
        return top == nullptr;  // Returns true if stack is empty
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << value << " pushed to the stack." << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow!" << endl;
            return 0;
        } else {
            Node* temp = top;
            top = top->next;
            int poppedValue = temp->data;
            delete temp;
            return poppedValue;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return 0;
        } else {
            return top->data;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        } else {
            Node* current = top;
            cout << "Stack values are: ";
            while (current != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.display();

    cout << "Top value: " << stack.peek() << endl;

    stack.pop();
    stack.display();

    return 0;
}

