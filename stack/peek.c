#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", stack[top]);
}