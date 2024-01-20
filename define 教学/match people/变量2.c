#include <stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;

    a = 666;
    b = 'F';
    c = 3.145;
    d = 3.141597865;

    printf("zixiang is %d\n", a);
    printf("always use %c\n", b);
    printf("the pai of the circle is%.3f\n", c);
    printf("the longest is %11.9fcm\n", d);
    return 0;
}