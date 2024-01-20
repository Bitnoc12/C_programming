#include <stdio.h>
#include <stdlib.h>
struct node
{
    char name[20], address[20], phone[15];
    struct node *link;    /*定义node型结构指针 */
};                        /* 定义结构 */
typedef struct node NODE; /* 定义结点类型 */

int main()
{
    NODE *head;
    NODE *p;
    p = (NODE *)malloc(sizeof(NODE)); /* 开辟新存储区，申请表头节点 */
    p->link = NULL;                   /* 将表头节点的link置为NULL*/
    head = p;
    int create(NODE * head, int n);
    create(head, 2);
    int insert_node(NODE * head, NODE * p, int i);

    p = (NODE *)malloc(sizeof(NODE));
    gets(p->name);
    insert_node(head, p, 1);

    int output(NODE * head);
    output(head);

    int delete_node(NODE * head, int i);
    delete_node(head, 2);

    output(head);

    getchar();
}

int create(NODE *head, int n)
{
    NODE *p;
    for (; n > 0; n--)
    {
        p = (NODE *)malloc(sizeof(NODE));
        gets(p->name);
        p->link = head->link;
        head->link = p;
    }
    return 0;
}

int output(NODE *head)
{
    NODE *p;
    p = head->link; /* p 指向第一个数据节点 */
    while (p != NULL)
    {
        puts(p->name); /* 输出 p 所指向节点的数据 */
        p = p->link;   /* p 指向下一个数据节点 */
    }
    return 0;
}

int insert_node(NODE *head, NODE *p, int i)
{
    NODE *q;
    int n = 0;
    for (q = head; n < i && q->link != NULL; ++n)
        q = q->link;   /* ① 定位 */
    p->link = q->link; /* ② 链接后面指针 */
    q->link = p;       /* ③ 链接前面指针 */
    return 0;
}

int delete_node(NODE *head, int i)
{
    NODE *q, *p;
    int n;
    for (n = 0, q = head; n < i - 1 && q->link != NULL; ++n)
        q = q->link; /* ① 定位 */
    if (i > 0 && q->link != NULL)
    {
        p = q->link;       /* p 指向被删除节点 */
        q->link = p->link; /* ② 摘链 */
        free(p);           /* ③ 释放 p节点 */
    }
}