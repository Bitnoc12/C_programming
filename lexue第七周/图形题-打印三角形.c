#include <stdio.h>
int main()
{
    int s, r, i, j, s1, s2;
    scanf("%d %d", &s, &r);
    for (i = 0; i < r; i++)
    {
        if (s > 9)
        {
            s %= 10;
        }
        printf("%d", s);
        s += 1;
    }
    printf("\n");
    s1 = s - 1;
    s2 = s - 1;
    for (i = 0; i < r - 1; i++)
    {
        for (j = 0; j < r - i - 1; j++)
        {
            if (j == 0)
            {
                s1 = s1 - 1;
                if (s1 > 9)
                {
                    s1 %= 10;
                }
                printf("%d", s1);
            }
            if (j == (r - i - 2))
            {
                s2 = s2 + 1;
                if (s2 > 9)
                {
                    s2 %= 10;
                }
                printf("%d", s2);
            }
            else if ((j > 0) && (j < r - i - 2))
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}