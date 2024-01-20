#include <stdio.h>
int main()
{
    int a, b, c, d, n, i, j, k, l = 0;
    scanf("%d", &n);
    for (i = 1, a = 1; i < n; i++)

    {
        a = a * 10;
    }
    b = a * 10;
    for (; a < b; a++)

    {
        k = 0;
        for (d = 1; d < b; d = d * 10)

        {
            c = 1;
            for (j = 1; j <= n; j++)

            {
                c = c * (a % (d * 10) / d);
            }
            k = k + c;
        }
        if (k == a)

        {
            printf("%d\n", a);
            l++;
        }
    }
    if (l == 0)

    {
        printf("No output.\n");
    }
    return 0;
}
