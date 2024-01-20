#include <stdio.h>

int main()
{
    int a;
    char b;
    float c;
    double d;

    a = 520;
    b = 'F';
    c = 3.14;
    d = 3.141592653;

    printf("打造完美主义 %d\n", a);
    printf("I love scishC.com%c\n", b);
    printf("圆周率是%3.2f\n", c);
    printf("精确到小数点后9位的圆周率是%11.9f cm\n", d);

    return 0;
}