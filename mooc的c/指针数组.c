#include <stdio.h>
int main()
{
    static int a[] = {1, 2, 3, 4, 5};
    int i;
    int *pa = a;
    for (i = 0; i < 5; i++)
    {
        printf("%d", *(pa + i));
    }
    return 0;
}