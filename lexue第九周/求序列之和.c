#include <stdio.h>

int main()
{
    int n;
    double sum = 0;
    double xulie(int);
    scanf("%d", &n);
    sum = xulie(n);
    if (sum == (int)sum)
        printf("%d\n", (int)sum);
    else
        printf("%lf\n", sum);
    return 0;
}
double xulie(int n)
{
    if (n == 1)
        return (1);
    if (n % 2 == 0)
        return 1 / (double)n + xulie(n - 1);
    if (n % 2 == 1)
        return -1 / (double)n + xulie(n - 1);
}