#include <stdio.h>/*约瑟夫问题*/
#include <stdlib.h>
struct node
{
    int no;
    struct node *next;
};

int main()
{
    int i, k;
    struct node *head, *p, *q;
    head = (struct node *)malloc(sizeof(struct node));
    head->no = -1;
    head->next = head;
    for (i = 30; i > 0; i--) /* 生成循环链表 */
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->next = head->next;
        p->no = i;
        head->next = p;
    }
    printf("\nThe original circle is :");
    while (p->next != head) /* 循环链跳过表头结点 */
        p = p->next;
    p->next = head->next; /* p 指向 30 */
    for (i = 0; i < 15; i++)
    {
        for (k = 1; k < 9; k++)
            p = p->next;
        q = p->next;          /* p 的下一个结点是要出列的结点 */
        p->next = q->next;    /* 循环链表跳过要出列的结点 */
        printf("%3d", q->no); /* 输出 q 结点的编号 */
        free(q);              /* 释放 q 结点 */
    }
}