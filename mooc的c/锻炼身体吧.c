#include <stdio.h>
int main()
{
    int a, b, c, n = 0;
    scanf("%d", &c);
    for (; c > 0; c--)
    {
        for (b = 1; b < c; b++)
        {
            for (a = 1; a < b; a++)
            {
                if ((c * c) == ((a * a) + (b * b)))
                {
                    n++;
                }
            }
        }
    }
    printf("%d", n);
    return 0;
}