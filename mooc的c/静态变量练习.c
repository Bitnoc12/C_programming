/*静态变量练习*/
#include <stdio.h>
int f(int a)
{
    auto int b = 0;
    static int c = 3;
    b++;
    c++;
    return a + b + c;
}
int main()
{
    int c, a = 1; /*局部变量 c, a */
    for (c = 1; c < 3; c++)
        printf("%d\n", f(a));
    return 0;
}