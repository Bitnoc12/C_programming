#include <stdio.h>

int main(int argc, char **argv)
{
    int n, j, i, hang, lie;
    char a, b;
    scanf("%d %c", &n, &a);

    lie = 4 * n - 2;
    for (hang = 1; hang <= n; hang++)
    {
        if (hang == 1)
        {
            for (j = 1; j <= lie; j++)
            {
                if (j == 1 || j == lie - 1)
                {
                    printf("%c", a);
                    continue;
                }
                else
                {
                    if (j == lie)
                    {
                        printf("\n");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            continue;
        }
        else
        {

            if (hang < n)
            {
                for (j = 1; j <= lie; j++)
                {
                    if (j == lie)
                    {
                        printf("\n");
                        continue;
                    }
                    if (j == 1 || j == lie - 1)
                    {
                        i = a + 3 * n - 2 - hang;
                        while (i > 90)
                        {
                            i -= 26;
                        }
                        b = i;
                        printf("%c", b);
                        continue;
                    }
                    else
                    {
                        if (j == 2 * hang - 1 || j == (lie + 1 - hang * 2))
                        {
                            i = a + hang - 1;
                            while (i > 90)
                            {
                                i -= 26;
                            }
                            b = i;
                            printf("%c", b);
                            continue;
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                }
                continue;
            }
            if (hang == n)
            {
                i = a + 3 * n - 2 - hang;
                while (i > 90)
                {
                    i -= 26;
                }
                for (j = 1; j < lie; j++)
                {
                    if (j % 2 == 0)
                    {
                        printf(" ");
                        continue;
                    }
                    else
                    {
                        if (j == 2 * n - 1)
                        {
                            while (i < 65)
                            {
                                i += 26;
                            }
                            b = i;
                            printf("%c", b);
                            i++;
                            continue;
                        }
                        if (j < 2 * n - 1)
                        {
                            while (i < 65)
                            {
                                i += 26;
                            }
                            b = i;
                            printf("%c", b);
                            i--;
                            continue;
                        }
                        else
                        {
                            while (i > 90)
                            {
                                i -= 26;
                            }
                            b = i;
                            printf("%c", b);
                            i++;
                        }
                    }
                }
                printf("\n");
            }
        }
    }
}