
#include <iostream>
#include <cstdlib>
using namespace std;
 
#define SIZE 10
 
template <class X>
class stack
{
    X *arr;
    int top;
    int capacity;
 
public:
    stack(int size = SIZE);     
 
    void push(X);
    X pop();
    X peek();
 
    int size();
    bool isEmpty();
    bool isFull();
 
    ~stack() {
        delete[] arr;
    }
};
 
template <class X>
stack<X>::stack(int size)
{
    arr = new X[size];
    capacity = size;
    top = -1;
}
 
template <class X>
void stack<X>::push(X x)
{
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Inserting " << x << endl;
    arr[++top] = x;
}
 
template <class X>
X stack<X>::pop()
{
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Removing " << peek() << endl;
 
    return arr[top--];
}
 
template <class X>
X stack<X>::peek()
{
    if (!isEmpty()) {
        return arr[top];
    }
    else {
        exit(EXIT_FAILURE);
    }
}
 
template <class X>
int stack<X>::size() {
    return top + 1;
}
 
template <class X>
bool stack<X>::isEmpty() {
    return top == -1; 
}
 
template <class X>
bool stack<X>::isFull() {
    return top == capacity - 1;   
}
 
int main()
{
    stack<string> pt(2);
 
    pt.push("A");
    pt.push("B");
 
    pt.pop();
    pt.pop();
 
    pt.push("C");
 
    cout << "The top element is " << pt.peek() << endl;
 
    cout << "The stack size is " << pt.size() << endl;
 
    pt.pop();
 
    if (pt.isEmpty()) {
        cout << "The stack is empty\n";
    }
    else {
        cout << "The stack is not empty\n";
    }
 
    return 0;
}