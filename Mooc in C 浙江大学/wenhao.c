#include <stdio.h>
int main()
{
    int i, j;
    float s;
    for (i = 6; i > 4; i--)
    {
        s = 0.0;
        for (j = i; j > 3; j--)
            s = s + i * j;
    }
    printf("% f\n", s);
}