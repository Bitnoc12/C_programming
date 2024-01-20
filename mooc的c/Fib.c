#include <stdio.h>
int main()
{
    int n, y;
    long fib(int);
    printf("\nInput n:");
    scanf("%d", &n);
    y = fib(n);
    printf("F%d=%d", n, y);
    return 0;
}
long fib(int n)
{
    if (n <= 2)
        return (1);
    else
        return fib(n - 1) + fib(n - 2);
}