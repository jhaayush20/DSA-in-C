#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");

    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    printf("\n");
}