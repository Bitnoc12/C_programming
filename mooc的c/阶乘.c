#include <stdio.h>

int main()
{
    int n, result = 1;
    scanf("%d", &n);
    if (n > 0)
    {
        do
        {
            result *= n;
            n--;
        } while (n);
    }
    printf("n=%d\nresult=%d\n", n, result);
    return 0;
}