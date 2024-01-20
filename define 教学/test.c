#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        s = 0.5 * (a + b + c);
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    }
    else
    {
        area = 0;
        printf("not triangle. ");
    }
    printf("a,b,c=%f,%f,%f area=%f\n", a, b, c, area);
    return 0;
}
