#include <stdio.h>

int main()
{
    int c, n = 1, t = 0;
    do
    {
        printf("Enter no%d result:", n);
        scanf("%d", &c);
        if (c < 0 || c > 100)
        {
            printf("result rejected,pls enter again!\n");
        }
        else
        {
            printf("scanf correctly\n");
            t += c;
            n++;
        }
    } while (n <= 3);
    printf("n=%d\naverage=%.2f\n", n, t * 1.0 / (n - 1));
    return 0;
}