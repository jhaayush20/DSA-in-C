#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

void peek()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Front element: %d\n", queue[front]);
}
