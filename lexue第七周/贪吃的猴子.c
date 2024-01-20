#include <stdio.h>
int main()
{
    int n, total;
    int Firstday(int);
    scanf("%d", &n);
    total = Firstday(n);
    if (total == 1)
    {
        printf("The monkey got %d peach in first day.\n", total);
    }
    else if (total > 1)
    {
        printf("The monkey got %d peaches in first day.\n", total);
    }
}
int Firstday(int n)
{
    if (n == 1)
    {
        return (1);
    }
    if (n > 1)
    {
        return 2 * (Firstday(n - 1) + 1);
    }
}