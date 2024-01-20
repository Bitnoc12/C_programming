#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    char s[100][200];
    s[0][0] = '0';
    int i, j;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (s[i - 1][j] == '0')
            {
                s[i][2 * j] = '0';
                s[i][2 * j + 1] = '1';
            }
            else
            {
                s[i][2 * j] = '1';
                s[i][2 * j + 1] = '0';
            }
        }
    }
    printf("%c\n", s[n - 1][k - 1]);
}