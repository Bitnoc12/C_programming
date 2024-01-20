#include <stdio.h>
int main()
{
    int strlen1(char *s);
    char a[10] = "china";
    int k = 0;
    k = strlen1(a);
    printf("%d\n", k);
    return 0;
}
int strlen1(char *s)
{
    if (*s == '\0')
        return 0;
    else
        return 1 + strlen1(s + 1);
}