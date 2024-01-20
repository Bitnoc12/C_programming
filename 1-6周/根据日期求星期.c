#include <stdio.h>
#include <math.h>
int main()
{
    int year, month, day, n, i;
    scanf("%d %d %d", &year, &month, &day);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        day += 1;
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            if (day == 32)
            {
                month++;
                day = 1;
                if (month == 13)
                {
                    year++;
                    month = 1;
                }
            }
        }
        if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day == 31)
            {
                month++;
                day = 1;
            }
        }
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            if (month == 2)
            {

                if (day == 30)
                {
                    month++;
                    day = 1;
                }
            }
        }
        else if (month == 2 && day == 29)
        {
            month++;
            day = 1;
        }
    }
    printf("%d.%d.%d\n", year, month, day);
    return 0;
}
