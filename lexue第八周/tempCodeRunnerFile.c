#include <conio.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int num, n, i, x;
    int result = 0;
    int date[50][2] = {0};
    int a[13] = {0, 12, 43, 71, 102, 132, 163, 193, 224, 255, 285, 316, 346}; /*非闰年对应的每个月13号到1月1号的天数，以下用到a[0]=0避免麻烦。多加一个数*/
    int b[13] = {0, 12, 43, 72, 103, 133, 164, 194, 225, 256, 286, 317, 347}; /*闰年对应的每个月13号到1月1号的天数，以下用到*/
    for (i = 1; i < 12; i++)
    {
        printf("input a year:\n");
        scanf("%d", &num);
        if (num % 4 != 0 || (num % 100 == 0 && num % 400 != 0))
        {
            for (i = 1; i < 12; i++)
            {
                if ((365 * num + (int)(num / 4) - (int)(num / 100) + (int)(num / 400) + a[i]) % 7 == 5) /*判断i月的13号是不是星期5*/
                {
                    result++;
                    date[result - 1][0] = i;
                    date[result - 1][1] = 13;
                }
            }
        }
        else
        {
            for (i = 1; i < 12; i++)
            {
                if ((365 * num + (int)(num / 4) - (int)(num / 100) + (int)(num / 400) + b[i]) % 7 == 5)
                {
                    result++;
                    date[result - 1][0] = i;
                    date[result - 1][1] = 13;
                }
            }
        }
    }
    printf("There are %d Black Fridays in year %d.\n", result, num);
    printf("There are: \n");
    for (i = 0; i < result; i++)
        printf("%d/%d/%d\n", num, date[i][0], date[i][1]);
    getch();
    return 1;
}
