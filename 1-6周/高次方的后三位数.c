#include <stdio.h>
int main()
{
    int i = 1, x, y, a = 1;
    printf("Input X and Y:");
    scanf("%d %d", &x, &y);
    while (i <= y)
    {
        a = a * x % 1000;
        i++;
    }
    printf("3 digits is:", a);
    printf("%d\n", a % 1000);
    return 0;
}