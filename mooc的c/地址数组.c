#include <stdio.h>
int main()
{
    static int a[] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d", *(a + i));
    }
    return 0;
}