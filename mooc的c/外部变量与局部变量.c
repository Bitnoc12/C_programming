/*外部变量与局部变量*/
#include <stdio.h>
extern int a; /*外部变量说明*/
int main()
{
    int i; /*局部变量定义及初始化*/
    void s();
    for (i = 1; i <= 5; i++)
    {
        ++a;
        printf("%d\n", a);
        s();
    }
    return 0;
}
int a = 10; /*外部变量定义及初始化*/
void s()
{
    int a = 100; /*局部变量定义及初始化*/
    ++a;
    printf("%d\n", a);
}