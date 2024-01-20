#include <stdio.h>

int main()
{
    int x;
    void int_turn(int);
    printf("\nEnter N:");
    scanf("%d", &x);
    int_turn(x);
    return 0;
}
void int_turn(int n)
{
    if (n >= 10)
    {
        printf("%d", n % 10);
        int_turn(n / 10);
    }
    else
    {
        printf("%d", n);
    }
}