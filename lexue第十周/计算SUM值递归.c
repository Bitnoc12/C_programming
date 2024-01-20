#include <stdio.h>
int main()
{
    int n;
    double SUMcal(int);
    double sum;
    scanf("%d", &n);
    sum = SUMcal(n);
    printf("sum=%lf\n", sum);
    return 0;
}
double SUMcal(int n)
{
    if (n == 1)
    {
        return (1);
    }
    else
    {
        return SUMcal(1 / (n - 1));
    }
}