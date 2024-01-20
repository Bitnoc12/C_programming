#include <stdio.h>
#define N 100
int main()
{
    char a[N], t;
    int i, j;
    scanf("%s", &a);
    for (i = 0; a[i] != 0; i++)
    {
        for (j = i + 1; a[j] != 0; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    puts(a);
}