#include <stdio.h>
int main()
{
    int a, b, c, i;
    int sum(int, int);
    for (i = 0; i < 3; i++)
    {
        printf("Enter a，b:\n");
        scanf("%d%d", &a, &b);
        c = sum(a, b);
        printf("Sum=%d\n", c);
        return 0;
    }
}
int sum(int a, int b)
{
    int c = 0;
    c = c + a + b;
    return (c);
}