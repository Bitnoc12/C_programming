#include <stdio.h>
#define N 100
int main()
{
    int a[N], b[N], n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if (n % 2 == 0)
    {
        for (i = 0; i < (n / 2); i++)
        {

            b[i] = a[i] * a[n - i - 1];
        }
        for (i = 0; i < (n / 2); i++)
        {
            printf("%d ", b[i]);
        }
    }
    else if (n % 2 != 0)
    {
        for (i = 0; i < (n / 2 + 1); i++)
        {
            if ((i) == (n - i - 1))
            {
                b[i] = a[i];
            }
            else
            {
                b[i] = a[i] * a[n - i - 1];
            }
        }
        for (i = 0; i < (n / 2 + 1); i++)
        {
            printf("%d ", b[i]);
        }
    }
    printf("\n");
    return 0;
}