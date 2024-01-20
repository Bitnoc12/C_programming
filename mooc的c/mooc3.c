#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
    {
        if (a == b && b == c && a == c)
        {
            printf("equilateral triangle.\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("isoceles triangle.\n");
        }
        else
        {
            printf("triangle.\n");
        }
    }
    else
    {
        printf("non-triangle.\n");
    }
    return 0;
}