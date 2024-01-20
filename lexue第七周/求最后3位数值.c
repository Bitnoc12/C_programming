#include <stdio.h>
int main()
{
    int a, n, i, last = 1;
    scanf("%d %d", &a, &n);
    if (n == 0)
    {
        last = 1;
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            last *= a;
            last %= 1000;
        }
    }
    if (last == 0)
    {
        printf("The last 3 numbers is 00%d.\n", last);
    }
    if (last < 10 && last > 0)
    {
        printf("The last 3 numbers is %d.\n", last);
    }
    if (last < 100 && last > 10)
    {
        printf("The last 3 numbers is %d.\n", last);
    }
    else if (last < 1000 && last > 100)
    {
        printf("The last 3 numbers is %d.\n", last);
    }
}