//	max3.c
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d %d %d", &a, &b, &c);

    int max = 0;

    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if (b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }

    printf("The max is %d\n", max);

    return 0;
}