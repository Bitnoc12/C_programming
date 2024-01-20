#include <stdio.h>
int main()
{
    int a, b, i;
    long int sum;
    scanf("%d %d", &a, &b);
    sum = 1;
    for (i = 1; i <= b; i++)
    {
        if (a == 0)
            sum = 0;
        if ((a != 0) || (b == 0))
            sum = 1;
        else
            sum = sum * (a % 1000);
    }
    printf("The last 3 numbers is %d.\n", sum);
}