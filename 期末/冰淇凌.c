#include <stdio.h>

int main()
{
    int i, j, a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    for (i = 1; i < c; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (j == 7)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    }
    printf("\n");
    for (i = 2; i <= 2; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (j == 6 || j == 7 || j == 8)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    }
    printf("\n");
    for (i = 3; i <= 4; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (j == 5 || j == 6 || j == 7 || j == 8 || j == 9)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 5; i <= 6; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8 || j == 9 || j == 10 || j == 11)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 7; i <= 8; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8 || j == 9 || j == 10 || j == 11 || j == 12 || j == 13)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 8; i <= 8; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (j == 1 || j == 13)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 9; i <= 9; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (j == 2 || j == 12)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 10; i <= 10; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (j == 3 || j == 11)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 11; i <= 11; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (j == 4 || j == 10)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 12; i <= 12; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (j == 5 || j == 9)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 13; i <= 13; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (j == 6 || j == 8)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 14; i <= 14; i++)
    {
        for (j = 1; j <= 13; j++)
        {
            if (j == 7)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}