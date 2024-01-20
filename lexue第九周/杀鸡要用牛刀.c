#include <stdio.h>

int main()
{
    int n, m, sum;
    int leijiaqi(int, int);
    scanf("%d %d", &n, &m);
    sum = leijiaqi(n, m);
    printf("The sum from %d to %d is %d.\n", n, m, sum);
    return 0;
}
int leijiaqi(int n, int m)
{
    if (m == n)
    {
        return m;
    }
    else
    {
        return n + leijiaqi(n + 1, m);
    }
}