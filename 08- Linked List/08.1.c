///1.link list node creation
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int value;
    struct NODE *next;
} NODE;

int main() {
    NODE *n =(NODE *)malloc(sizeof(NODE));
    n->value = 10;
    n->next = NULL;

    NODE *m = (NODE *)malloc(sizeof(NODE));
    m->value = 20;
    m->next = NULL;

    NODE *p = (NODE *)malloc(sizeof(NODE));
    p->value = 40;
    p->next = NULL;

    n->next = m;
    m->next = p;

    printf("%d->", n->value);
    printf("%d->", m->value);
    printf("%d->", p->value);

    printf("\n\n");

    NODE *temp = n;
    while(temp != NULL)
    {
        printf("%d->", temp ->value);
        temp = temp->next;
    }


    return 0;
}
