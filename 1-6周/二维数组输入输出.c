#include <stdio.h>
#define N 3
int main()
{
    int fs[N][3], i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &fs[i][j]);
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", fs[i][j]);
        }
        printf("\n");
    }
    return 0;
}