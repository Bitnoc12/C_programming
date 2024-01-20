#include <stdio.h>
unsigned int deep;
void func(unsigned int n)
{
    int i, j;
    if (n == 1)
        return;
    func(n - 1);
    for (i = 1; i <= n / 2; i++)
    {
        for (j = 2; j < deep; j++)
        {
            printf("1+");
        }
        printf("%d+%d; ", i, n - i);
    }
    if (deep)
        deep--;
}
int main(void)
{
    unsigned int n;
    scanf("%u", &n);
    deep = n;

    printf("%u\n", n);
}