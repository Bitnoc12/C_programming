#include <stdio.h>
int main()
{
    int n;
    float y;
    float x;
    float fact(int);
    float fact2(int);
    printf("\nInput n:");
    scanf("%d", &n);
    y = fact(n);
    x = fact2(n);
    printf("%d!=%-10.0f\n", n, y);
    printf("%d!=%-10.0f\n", n, x);
    return 0;
}
float fact(int n)
{
    float f = 0;
    if (n < 0)
    {
        printf("n<0,Input Error!");
    }
    else if (n == 0 || n == 1)
    {
        f = 1;
    }
    else
    {
        f = n * fact(n - 1);
    }
    return (f);
}
float fact2(int n)
{
    float s = 0;
    if (n == 0)
    {
        s = 1;
    }
    else
    {
        s = fact2(n - 1);
        s = n * s;
    }
    return (s);
}
