#include<stdio.h>

int maxSize = 5;
int stack[5];
int top = -1;

void push(int value)
{
    if(top == maxSize - 1)
    {
        printf("Overflow\n");
    }
    else
    {
     top++;
     stack[top] = value;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("underflow\n");
    }
    else
    {
     printf("%d\n", stack[top]);
     top--;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    push(10);
    pop();
}
