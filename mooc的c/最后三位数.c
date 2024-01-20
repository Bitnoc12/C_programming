#include <stdio.h>
int main()
{
    int a, b, i;
    long int sum;
    scanf("%d %d", &a, &b);
    sum = 1;
    for (i = 1; i <= b; i++)
    {
        sum = sum * (a % 1000);
    }
    if (sum < 10)
    {
        printf("The last 3 numbers is 00%d.\n", sum);
    }
    if (sum < 100)
    {
        printf("The last 3 numbers is 0%d.\n", sum);
    }
    else
        printf("The last 3 numbers is %d.\n", sum);
}