#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void insert(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = value;

    printf("%d inserted into stack\n", value);
}