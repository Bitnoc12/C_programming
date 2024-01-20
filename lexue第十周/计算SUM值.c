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
    double sum = 0;
    while (n > 1)
    {
        sum = sum + 1 / (n * 1.0);
        n--;
    }
    if (n == 1)
        sum += 1;
    return sum;
}