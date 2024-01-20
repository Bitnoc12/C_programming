#include <stdio.h>
#include <math.h>
int isprime(int n)
{
    if (n == 2 || n == 3)
        return 1;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    if (n == 1)
        printf("Yes");
    else
    {
        for (i = 2; i <= n; i++)
        {
            if (isprime(i) && n % i == 0)
            {
                if (n == pow(i, (int)(log(n) / log(i))))
                {
                    printf("Yes");
                    break;
                }
            }
        }
        if (i > n)
            printf("No");
    }
    return 0;
}