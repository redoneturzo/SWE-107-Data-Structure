#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int value;
    struct NODE *nextNode;
} NODE;

int main()
{
    NODE *head = NULL;
    NODE *tail = NULL;

    NODE *firstNode = (NODE*)malloc(sizeof(NODE));
    firstNode -> value = 10;
    firstNode -> nextNode = NULL;

    head = firstNode;
    tail = firstNode;

    NODE *secondNode = (NODE*)malloc(sizeof(NODE));
    secondNode -> value = 20;
    secondNode -> nextNode = NULL;

    tail ->nextNode = secondNode;
    tail = secondNode;

    NODE *thirdNode = (NODE*)malloc(sizeof(NODE));
    thirdNode -> value = 30;
    thirdNode -> nextNode = NULL;

    tail -> nextNode = thirdNode;
    tail = thirdNode;

    NODE *temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp -> value);
        temp = temp -> nextNode;
    }
    printf("Null");


    return 0;
}
