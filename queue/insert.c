#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

void insert(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)
        front = 0;

    queue[++rear] = value;

    printf("%d inserted into queue\n", value);
}
