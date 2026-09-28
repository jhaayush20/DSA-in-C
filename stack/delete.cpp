#include <iostream>
using namespace std;

#define MAX 100

int stackArr[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }

    stackArr[++top] = value;
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
        return;
    }

    cout << stackArr[top] << " popped from stack" << endl;
    top--;
}

int main()
{
    push(10);
    push(20);
    push(30);

    pop();
    pop();

    return 0;
}