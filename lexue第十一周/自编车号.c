#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
    char a[N];
    int i, j, l, count = 0;
    gets(a);
    if (strlen(a) == 5)
    {
        if (a[4] >= 48 && a[4] <= 57)
        {
            for (i = 0; i < 4; i++)
            {
                if ((a[i] >= 97 && a[i] <= 122) || (a[i] == 73 || a[i] == 79))
                {
                    printf("no.\n");
                    break;
                }
                if (a[i] >= 65 && a[i] <= 90)
                {
                    count++;
                }
            }
            if (count > 1)
            {
                printf("ok.\n");
            }
        }
        else
        {
            printf("no.\n");
        }
    }
    else
    {
        printf("no.\n");
    }
    return 0;
}
