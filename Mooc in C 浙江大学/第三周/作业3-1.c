#include <stdio.h>

int main()
{
    int BJT = 0;
    int UTC = 0;
    int t1;
    int t2;

    printf("请输入北京的时间,范围为0~2359\n");
    scanf("%d", &BJT);

    if (BJT % 100 < 10)
    {
        t2 = BJT % 100 / 10;
    }
    else if (BJT / 100 < 10)
    {
        t1 = BJT % 100 / 10;
    }
    else if (BJT % 100 > 60)
    {
        t2 = BJT % 100 - 60;
        t1++;
    }
    printf("BTJ的时间为 %d时%d分", t1, t2);
}