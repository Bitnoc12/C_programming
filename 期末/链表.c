#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

//构造结构体
typedef struct list
{
    char data;
    struct list next;
} List, LNode;

//函数声明
List init_list(List head);
int chkPalindrome(List head);

int main()
{
    List head;
    head = (LNode)malloc(sizeof(LNode));
    head->next = NULL;
    head = init_list(head);
    if (chkPalindrome(head))
        printf("单链表中有回文结构!\n");
    else
        printf("单链表中无回文结构!\n");
}

//链表初始化函数
List init_list(List head)
{
    int i = 0;
    List p = head;

    char chain[1000];
    memset(chain, 0, 1000, sizeof(char));
    gets(chain);

    while (chain[i] != '\0')
    {
        List s;
        s = (LNode *)malloc(sizeof(LNode));
        s->data = chain[i];
        s->next = NULL;
        p->next = s;
        p = p->next;
        i++;
    }
    return head->next;
}
typedef struct
{
    int data[100000];
    int top;
} creatStack;

int chkPalindrome(List head)
{
    creatStack stack;
    List p = head;
    int num = 0, flag = 0;
    stack.top = -1;
    while (p != NULL)
    {
        num++;
        p = p->next;
    }
    if (num & 1)
        flag = 1;
    num = (num + 1) / 2;
    p = head;
    for (int i = 0; i < num; i++)
    {
        stack.data[++(stack.top)] = p->data;
        p = p->next;
    }
    if (flag)
        stack.top--;
    while (p != NULL)
    {
        if (p->data != stack.data[stack.top])
            return 0;
        stack.top--;
        p = p->next;
    }
    return 1;
}
