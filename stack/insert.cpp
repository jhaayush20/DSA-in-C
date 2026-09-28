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

    top++;
    stackArr[top] = value;
}

int main()
{
    push(10);
    push(20);
    push(30);

    cout << "Stack elements: ";

    for (int i = top; i >= 0; i--)
    {
        cout << stackArr[i] << " ";
    }

    cout << endl;

    return 0;
}