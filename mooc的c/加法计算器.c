#include <stdio.h>

int main()
{
    int n = 0, sum = 0;
    while (n <= 100)
    {
        sum += n;
        n++;
    }
    printf("n=%d,sum=%d", n, sum);
    return 0;
}