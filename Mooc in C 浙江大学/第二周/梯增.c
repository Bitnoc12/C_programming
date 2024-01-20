#include <stdio.h>

int main()
{
    int a = 10;
    int b = 10;
    int c = 0;

    printf("++a=%d\n", ++a);
    printf("%d\n", a);

    printf("a++=%d\n", a++);
    printf("%d\n", a);

    printf("--a=%d\n", --a);
    printf("%d\n", a);

    printf("a--=%d\n", a--);
    printf("%d\n", a);

    b += 10 * 7;
    printf("b=%d\n", b);

    c = 1 + 2 + (3 + 4) * ((5 * 6 % 7 / 8) - 9) * 10;
    printf("c=%d\n", c);

    return 0;
}