#include "stdio.h"
#include "stdlib.h"

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

void outlist(PNODE head);
void ins_list(PNODE h, int num);

int main()
{
    int num = 1;
    PNODE head;

    head = (PNODE)malloc(sizeof(NODE));
    head->next = NULL;
    head->data = -1;

    while (num != 0)
    {
        scanf("%d", &num);
        if (num != 0)
            ins_list(head, num);
    }

    outlist(head);
    return 0;
}
void ins_list(PNODE h, int num)
{
    int i;
    PNODE p;
    PNODE q;
    if ((h->next) == NULL)
    {
        p = (PNODE)malloc(sizeof(NODE));
        h->next = p;
        p->data = num;
        p->next = NULL;
    }
    else
    {
        p = h->next;
        while ((p->next) != NULL)
        {
            p = p->next;
        }
        q = (PNODE)malloc(sizeof(NODE));
        p->next = q;
        q->next = NULL;
        q->data = num;
    }
}
void outlist(PNODE head)
{
    PNODE p;
    p = head->next;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}