#include <stdio.h>
int main()
{
    int n, m, i, j, t, k, c, d;
    scanf("%d%d", &n, &m);
    int a[100] = {0};
    int b[100] = {0};
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (j = 0; j < m; j++)
        scanf("%d", &b[j]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m - 1; j++)
        {
            if (b[j] > b[j + 1])
            {
                t = b[j];
                b[j] = b[j + 1];
                b[j + 1] = t;
            }
        }
    }
    k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = k; j < m; j++)
        {
            if (b[j] >= a[i])
            {
                a[i] = 0;
                k++;
                break;
            }
            else
            {
                b[j] = 0;
                k++;
            }
        }
        if (k > m)
            break;
    }
    for (i = k; i < m; i++)
        b[i] = 0;
    c = 0;
    d = 0;
    for (i = 0; i < n; i++)
        c = c + a[i];
    for (i = 0; i < m; i++)
        d = d + b[i];
    if (c == 0)
        printf("%d\n", d);
    else
        printf("bit is doomed!\n");
}