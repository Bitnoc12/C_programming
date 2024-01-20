#include <stdio.h>

int main()
{
    int hour1, minute1;
    int hour2, minute2;
    int change;

    printf("请输入第一个时间：");
    printf("格式为小时分钟，eg /*2 23*/");
    scanf("%d %d", &hour1, &minute1);

    printf("请输入第二个时间：");
    scanf("%d %d", &hour2, &minute2);

    change = (hour1 * 60 + minute1) - (hour2 * 60 + minute2);

    printf("时间差=%d小时%d分钟", change / 60, change % 60);
}