#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 3, t;
    while (a < b < c)
    {
        t = a;
        a = b;
        b = t;
        c--;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}