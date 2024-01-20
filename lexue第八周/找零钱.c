#include <stdio.h>
int main()
{
    int n, t, x, y, z;
    scanf("%d", &n);
    t = n * 10;
    if (t % 16 != 0)
        printf("No change.\n");
    else
    {
        t = t / 16;
        x = t * 10;
        y = t * 12;
        z = t * 9;
        printf("%d,%d,%d\n", x, y, z);
    }
    return 0;
}