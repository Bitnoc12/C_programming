#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    int n = 0;
    char word;
    char nword;

    scanf("%d %c", &n, &word);

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < (n - i); j++)
        {
            printf(" ");
        }
        nword = word++;
        if (word > 'Z')
        {
            word = 'A';
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf("%c", nword);
            if (j < i)
            {
                nword++;
                if (nword > 'Z')
                {
                    nword = 'A';
                }
            }
            else
            {
                nword--;
                if (nword < 'A')
                {
                    nword = 'Z';
                }
            }
        }
        printf("\n"); //打印完一行后需要换行
    }

    return 0;
}