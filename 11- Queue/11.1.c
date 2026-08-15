#include<stdio.h>

int queue[5];
int max_size = 5;
int front = -1; int rear = -1;
void push(int value)
{
    if(rear == max_size - 1)
    {
        printf("overflow");
        return;
    }
    if(front == -1 && rear == -1)
    {
        front++;

        rear++;
        queue[rear] = value;
    }
    else
    {
        rear++;
        queue[rear] = value;
    }
}
void pop()
{
    if(front == -1)
    {
        printf("Underflow");
        return;
    }
    printf("%d\n", queue[front]);

    if(front == rear)
    {
        front =-1;
        rear = -1;
    }
    else
    {
        front++;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    pop();
    pop();
    return 0;
}
