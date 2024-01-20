#include <stdio.h>

int main()
{
    int S, a, b, c;

    printf("请输入需要排列的三位数：");
    scanf("%d", &S);

    a = S / 100;
    b = S / 10 % 10;
    c = S % 10;

    printf("逆序数为：%d", c * 100 + b * 10 + a);
}