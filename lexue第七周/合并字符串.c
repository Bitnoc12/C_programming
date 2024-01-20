#include <stdio.h>
#define N 100
int main()
{
    int i, j, k, m;
    char a[N], b[N], cb[2 * N], t;
    scanf("%s", &a);
    scanf("%s", &b);

    for (i = 0; a[i] != 0; i++)
    {
        cb[i] = a[i];
    }
    for (j = 0; b[j] != 0; j++, i++)
    {
        cb[i] = b[j];
    }
    cb[i] = '\0';
    for (k = 0; k < i; k++)
    {
        for (m = k + 1; m < i; m++)
        {
            if (cb[k] > cb[m])
            {
                t = cb[k];
                cb[k] = cb[m];
                cb[m] = t;
            }
        }
    }
    puts(cb);
    return 0;
}