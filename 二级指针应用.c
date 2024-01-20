/*二级指针应用*/
#include <stdio.h>
int main()
{
    char *name[] = {"Book", "Cell Phone", "Table", "Program", "Computer"};
    /*定义指针数组，并用字符串为其初始化*/
    char **p;
    int i;
    for (i = 0; i < 5; i++)
    {
        p = name + i; /*二级指针指向指针数组*/
        printf("%s\n", *p);
    }
    return 0;
}