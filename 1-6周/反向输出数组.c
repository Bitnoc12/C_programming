#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i = 5;
    while (--i >= 0)
    {
        printf("a[%d]=%d.\t", i, a[i]);
    }
    return 0;
}