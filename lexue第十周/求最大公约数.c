#include <stdio.h>
int main()
{
    int n, m, c;
    int gongyueshu(int n, int m);
    scanf("%d %d", &n, &m);
    c = gongyueshu(n, m);
    printf("%d\n", c);
    return 0;
}
int gongyueshu(int n, int m)
{
    if (m <= n && m == 0)
    {
        return n;
    }
    else if (n < m)
    {
        return gongyueshu(m, n);
    }
    else
    {
        return gongyueshu(m, n % m);
    }
}