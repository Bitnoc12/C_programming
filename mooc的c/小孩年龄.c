#include <stdio.h>
int age(int n)
{
    if (n == 1)
        return 10;
    else
        return age(n - 1) + 2;
}
int main()
{
    int k, n;
    scanf("%d", &n);
    k = age(n);
    printf("The No %d age is %d", n, k);
    return 0;
}