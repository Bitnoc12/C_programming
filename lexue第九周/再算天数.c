#include <stdio.h>
// 声明函数原型
int leap_year(int);
int year_days(int);
int days(int, int, int);

int leap_year(int year) // 判断闰年或平年
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0;
}

int year_days(int year) // 计算一整年的天数
{
    return leap_year(year) ? 366 : 365;
}

int days(int year, int month, int day) // 计算该天month,day 是本年year的第几天
{
    int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, i;

    if (leap_year(year) && month > 2)
        day++;

    for (i = 1; i < month; i++)
        day += months[i];

    return day;
}
int main()
{
    int y, y1, m, m1, d, d1;
    int sum1, sum2, p1 = 0, q1 = 0;
    scanf("%d %d %d", &y, &m, &d);
    scanf("%d %d %d", &y1, &m1, &d1);

    p1 = year_days(y);
    sum1 = year_days(p1) + days(y, m, d);
    q1 = year_days(y1);
    sum2 = year_days(q1) + days(y1, m1, d1);

    if (y == y1)
    {
        if (sum1 > sum2)
            printf("%d days\n", sum1 - sum2);
        else
            printf("%d days\n", sum2 - sum1);
    }
    if (y > y1)
    {
        if (sum1 > sum2)
            printf("%d days\n", sum1 - sum2 + year_days(y));
        else
            printf("%d days\n", sum2 - sum1 + year_days(y));
    }
    if (y < y1)
    {
        if (sum1 > sum2)
            printf("%d days\n", sum1 - sum2 + year_days(y1));
        else
            printf("%d days\n", sum2 - sum1 + year_days(y1));
    }
}