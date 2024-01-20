#include <stdio.h>

int main()
{
    int x, i = 0;
    while (i <= 4)
    {
        scanf("%d", &x);
        if (x >= 60)
        {
            printf("**************\n");
            printf("%d,OK!\n", x);
            printf("**************\n");
        }
        else
        {
            printf("**************\n");
            printf("%d,fail\n", x);
            printf("**************\n");
        }
        i++;
    }
    return 0;
}